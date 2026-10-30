#include <iostream>
#include <stack> // call the stak from STL


int main(){
    std::stack<int> newStack; // created an object

    // testing if the stack is empty
    std::cout<<"is the stack empty? "<<newStack.empty()<<std::endl;

    // insert 3 elements:
    newStack.push(3);
    std::cout<<"Top of stack: "<<newStack.top()<<std::endl;
    newStack.push(2);
    std::cout<<"Top of stack: "<<newStack.top()<<std::endl;
    newStack.push(1);
    std::cout<<"Top of stack: "<<newStack.top()<<std::endl;

    std::cout<<"is the stack empty? "<<newStack.empty()<<std::endl;
    newStack.push(6);
    newStack.push(7);
    newStack.push(8);

    std::cout<<"Size of the stack is: "<<newStack.size()<<std::endl;
    //stop here for documentaion

    //experimentation
    for( int i = 0; i<6; i++){
         std::cout<<"the stack is: "<<newStack.top()<<std::endl;
         newStack.pop();

    }

    //swap?? - swap the content of the publc member functions
    //emplace?? - consruct and insert elements - public member function

    return 0;
}