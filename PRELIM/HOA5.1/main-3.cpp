#include <iostream>
#include <queue>

void display(std::queue<char> copyQ);

int main(){
    //create an object
    std::queue<char>myQ;

    myQ.push('C');
    myQ.push('A');
    myQ.push('R');
    myQ.push('L');
    std::cout<<"Displaying Queue: "<<std::endl;
    display(myQ);
    //try all member function
    //empty
    std::cout<<"Is the queue empty?: "<<myQ.empty()<<std::endl;
    //size
    std::cout<<"The size of the queue: "<<myQ.size()<<std::endl;
    //front
    std::cout<<"What is the front of the queue?: "<<myQ.front()<<std::endl;
    //back
    std::cout<<"What is the rear of the queue?: "<<myQ.back()<<std::endl;
    //pop
    std::cout<<"Popping Queue: "<<std::endl;
    myQ.pop();
    //display
    std::cout<<"Displaying Queue: "<<std::endl;
    display(myQ);
    //push
    std::cout<<"Pushing '!': "<<std::endl;
    myQ.push('!');
    //display
    std::cout<<"Displaying Queue: "<<std::endl;
    display(myQ);

    return 0;
}
void display(std::queue<char> copyQ){
    //creates a copy of he queue that was passed
    std::queue<char> c = copyQ;
    while(!c.empty()){
        std::cout<<" "<<c.front();
        c.pop();
    }
    std::cout<<"\n";
}