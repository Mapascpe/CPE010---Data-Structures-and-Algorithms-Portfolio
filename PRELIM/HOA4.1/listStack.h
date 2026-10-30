#ifndef LIST_STACK_H
#define LIST_STACK_H


template <typename T>
class Node{
    public:
    T data;
    Node<T>* next = nullptr;
};

//create a pointer/reference tip that always point to the current top node

//global pointer declaration

template <typename T>
Node<T>* head = nullptr;

//pushing operation:
template <typename T>
void push(T newData){
    //create a new node
    Node<T>* newNode = new Node<T>;
    //assign th data to the newnode
    newNode->data = newData;
    //point the nw node next to the current top
    newNode->next = head<T>;
    // assign the new top to the new node
    head<T> = newNode;
}

//isEmpty()
template <typename T>
bool isEmpty(){
    return head<T> == nullptr;
}

template <typename T>
T pop(){
    // if the tack is empty error catch
    if(isEmpty<T>()){
        std::cout<<"Stack underflow"<<std::endl;
    }
    // saving a current top node to a temporary variable
    Node<T>* temp = head<T>;
    // store the data to a temporary variable
    T tempVal = temp->data;
    // move the head to next node
    head<T> = head<T>->next;
    //free up the memory
    delete temp;
    //return the temporary variable data
    return tempVal;
}

template <typename T>
void Top(){
    if(isEmpty<T>()) return;
    std::cout<<"The top is: "<<head<T>->data<<std::endl;
}

template <typename T>
void displayAll(){
    if(head<T> == nullptr) return;
    while(head<T> != nullptr){
        std::cout<<head<T>->data;
        head<T> = head<T>->next;
    }
}

template <typename T>
void balanceChecker(){
    
}
    

    



#endif