#include <iostream>

const size_t maxCap = 100;
int stack[maxCap];
int top = -1, newData, elements;

//prototyping
void push();
void pop();
void Top();
bool isFull();
bool isEmpty();
void displayAll();


int main(){
    int choice;
    //asked the user for the maximun elements o be inserted
    std::cout<<"enter the number of maximun elements for the new sack (max: 100) ";
    std::cin >> elements;

    while(choice != 7){
        std::cout<<"Stack Operations: "<<std::endl;
        std::cout<<"1. Push \n2. Pop \n3. Top\n4. isEmpty\n5. isFull \n6. displayAll\n7. Exit! \n"<<std::endl;
        std::cin>>choice;

        switch(choice){
            case 1: push();
            break;
            case 2: pop();
            break;
            case 3: Top();
            break;
            case 4: std::cout<<isEmpty()<<std::endl;
            break;
            case 5: std::cout<<isFull()<<std::endl;
            break;
            case 6: displayAll();
            break;
            case 7: break;
            default: std::cout<<" Invalid choice"<<std::endl;
        }
    }
    return 0;
}
bool isEmpty(){
    //top is -1
    if(top == -1) return true;
    return false;
}

bool isFull(){
    //not equal to the maxCap
    if(top >= elements-1){
        std::cout<<"Stack Overflow ";
        return true;
    }else return false;

}

void push(){
    //check if the stack is full, if yes urn an error
    if(isFull()) return;
    //ask the user for a value to be pushed ino the stack
    std::cout<<"What number you want to add to the stack? ";
    std::cin>> newData;
    //store inside the stack
    stack[++top] = newData;

}

void pop(){
    
    //check if thre are no more elements insie the stack
    if(isEmpty()) return;
    // display the element to be popped;
    std::cout<<"Popping: "<<stack[top]<<std::endl;
    //decrement top
    top--;
}

void Top(){
    //error checking
    if(isEmpty()) return;
    //display the top element
    std::cout<<"The top element is: "<< stack[top]<<std::endl;
}

void displayAll(){
    if(isEmpty()) return;
    std::cout<<"The elements are: "<<std::endl;
    for(int i = top; i >= 0; i--){
        std::cout<<stack[i]<<std::endl;
    }
}