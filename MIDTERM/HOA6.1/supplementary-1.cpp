#include <iostream>
#include "node.h"
#include "searchingalgo.h"

int main () {
    std::cout << "Problem #1" << std::endl;

    //array
    int p1List[] = {15, 18, 2, 19, 18, 0, 8, 14, 19, 14};
    int p1Size = 10;

    std::cout << "Array Approach (Searching for 18): ";
    linearSearchArr(p1Size, 18, p1List);

    //LL
    Node<int>* Head = new_node(15);
    Head->next = new_node(18);
    Head->next->next = new_node(2);
    Head->next->next->next = new_node(19);
    Head->next->next->next->next = new_node(18);
    Head->next->next->next->next->next = new_node(0);
    Head->next->next->next->next->next->next = new_node(8);
    Head->next->next->next->next->next->next->next = new_node(14);
    Head->next->next->next->next->next->next->next->next = new_node(19);
    Head->next->next->next->next->next->next->next->next->next = new_node(14);

    std::cout << "Linked List Approach (Searching for 18): ";
    linearSearchLL(Head, 18);
    std::cout << std::endl;

    std::cout << "Problem #2" << std::endl;
    int problem2List[] = {15, 18, 2, 19, 18, 0, 8, 14, 19, 14};
    int p2Size = 10;

    int instances = countInstancesArr(p2Size, 18, problem2List);
    std::cout << "Number of times 18 appears: " << instances << std::endl;
    std::cout << std::endl;

    std::cout << "Problem #3" << std::endl;
    int sortedList[] = {3, 5, 6, 8, 11, 12, 14, 15, 17, 18};
    int p3Size = 10;

    std::cout << "Searching for 8 using standard Binary Search: ";
    binarySearchArr(p3Size, 8, sortedList);
    std::cout << std::endl;

    std::cout << "Problem #4" << std::endl;
    std::cout << "Searching for 8 using recursive Binary Search: ";
    recursiveBinarySearchArr(0, 9, 8, sortedList);
    std::cout << std::endl;

    return 0;
}