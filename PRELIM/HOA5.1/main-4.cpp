#include <iostream>
#include "queueLL.h"

int main(){
    qNode<char>* front = nullptr;
    qNode<char>* back = nullptr;


    enqueue('C', &front, &back);
    std::cout<<front->data<<" "<<back->data<<std::endl; 
    enqueue('A', &front, &back);
    std::cout<<front->data<<" "<<back->data<<std::endl;
    enqueue('R', &front, &back);
    std::cout<<front->data<<" "<<back->data<<std::endl;  

    dequeue(&front, &back);
    std::cout<<front->data<<" "<<back->data<<std::endl; 

    frontCheck(&front);
    backCheck(&back);
    displayAll(&front);

    return 0;
}