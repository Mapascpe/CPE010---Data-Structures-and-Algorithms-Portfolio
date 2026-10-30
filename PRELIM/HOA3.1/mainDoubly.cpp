#include <iostream>
#include "simply_LL.h"
#include "double_LL.h"

int main() {
    //creating the first node'C' 'P'
    DoubleList<char>* head = createNode('C');
    DoubleList<char>* second = createNode('P');
    DoubleList<char>* third = createNode('E');

    //link the nodes together
    head->next = second;
    second->prev = head;

    second->next = third;
    third->prev = second;
    std::cout<<"Traversal Testing"<<std::endl;
    dllTraversal(head);
    std::cout<<"Insert head Testing"<<std::endl;
    dllInsertHead('X', &head);
    dllTraversal(head);

    std::cout<<"Insert end testing"<<std::endl;
    dllInsertEnd('1', head);
    dllTraversal(head);

    std::cout<<"Testing General Insert at any node"<<std::endl;
    dllGeneralInsert('2', head->next->next->next);
    dllTraversal(head);
    //finding the node P to insert R
    DoubleList<char> *current = head;
    while (current != nullptr && current->data != 'P') {
        current = current->next;
    }
    if (current != nullptr) {
        dllGeneralInsert('R', current);
    }
    dllTraversal(head);


    std::cout<<"Testing Node Deletion"<<std::endl;
    dllDeleteNode('2', &head);
    dllTraversal(head);

    std::cout<<"Testing list Deletion"<<std::endl;
    dllDeleteList(&head);
    dllTraversal(head);



    return 0;
}