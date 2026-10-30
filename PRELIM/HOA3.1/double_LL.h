

#ifndef DOUBLE_LL_H
#define DOUBLE_LL_H

template <typename T>
class DoubleList{
    public:
    T data;
    DoubleList<T>* prev = nullptr;
    DoubleList<T>* next = nullptr;

};

// create a new node;

template <typename T>
DoubleList<T>* createNode(T newData) {
    //dynamically allocate memory
    DoubleList<T>* newNode = new DoubleList<T>;

    newNode->data = newData;
    newNode->prev = nullptr;
    newNode->next = nullptr;

    //return the address
    return newNode;
}
template <typename T>
void dllTraversal(DoubleList<T>* currentNode) {

    DoubleList<T>* tail;
    //checking if the list empty
    if (currentNode == nullptr) {
        std::cout<<"Empty List"<<std::endl;
    }

    //forwards traversing:
    std::cout<<"Forward: "<<std::endl;
    //moves towards the last node(till it becomes pointer)
    while (currentNode != nullptr) {
        std::cout<<currentNode->data<<" ";
        //saved the current node as the last visited noted
        tail = currentNode;
        //move to the next node
        currentNode = currentNode->next;

    }
    std::cout<<""<<std::endl;
    //backward traversing
    std::cout<<"Backward: "<<std::endl;
    //move toward the head
    while (tail != nullptr) {
        //printed the data
        std::cout<<tail->data<<" ";
        //move towards the previous node
        tail = tail->prev;
    }
    std::cout<<std::endl;

}

template <typename T>
void dllInsertHead(T newData, DoubleList<T>** currentHead) {
    //create a node
    DoubleList<T>* newNode = createNode(newData);
    //new node should point to the current head
    newNode->next = *currentHead;
    //current head should point back to the new node
    (*currentHead)->prev = newNode;
    //update the header pointer
    *currentHead = newNode;
}

template <typename T>
void dllInsertEnd(T newData, DoubleList<T> *currentHead) {
    //create a node
    DoubleList<T>* newNode = createNode(newData);
    //traverse to the last node
    while (currentHead->next != nullptr) {
        currentHead = currentHead->next;
    }
    //connect the last node to the new node
    currentHead->next = newNode;
    //connect the new node to the last node
    newNode->prev = currentHead;

}

// insertion at any node
template <typename T>
void dllGeneralInsert(T newData, DoubleList<T>* prevNode) {
    if (prevNode == nullptr)return;
    DoubleList<T>* newNode = createNode(newData);
    //new node points to the node after prevNode
    newNode->next = prevNode->next;
    newNode->prev = prevNode;
    if (prevNode->next != nullptr) {
        prevNode->next->prev = newNode;
    }
    prevNode->next = newNode;
}

// deletion of a node
template <typename T>
void dllDeleteNode(T findData, DoubleList<T>** head) {
    //check if there is no list to be deleted
    if(*head == nullptr) return;

    DoubleList<T>* currNode = *head;

    //data searching loop
    while(currNode != nullptr && currNode->data != findData){
        currNode = currNode->next;

    }

    // if data was not found
    if(currNode == nullptr) return;
    if(currNode == *head){
        *head = currNode->next;
        if (*head != nullptr) {
            (*head)->prev = nullptr;
        }

    }else{
        currNode->prev->next = currNode->next;
        if (currNode->next != nullptr) {
            currNode->next->prev = currNode->prev;
        }
    }
    //how do we delete the node
    delete currNode;
}

template <typename T>
void dllDeleteList(DoubleList<T>** head){
    DoubleList<T>* current = *head;

    while(current != nullptr){
        DoubleList<T>* temp = current;
        current = current->next;
        delete temp;
    }
    *head = nullptr;
}

#endif
