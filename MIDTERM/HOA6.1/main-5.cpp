#include <iostream>
#include <cstdlib> //for generating random int
#include <time.h> //will be used for our seeding function
#include "node.h"
#include "searchingalgo.h"

const int max_size = 50;

int main() {

    //generate
    int dataset[max_size];
    srand(time(0));
    for (int i = 0; i < max_size; i++) {
        dataset[i] = rand();

    }
    for (int i = 0; i < max_size; i++) {
        std::cout << dataset[i] << std::endl;
    }
    std::cout << std::endl;

    int userInput;

    std::cout<<"What number to search? ";
    std::cin >> userInput;
    std::cout <<"Linear Search result ARR: " << std::endl;
    linearSearchArr(max_size, userInput, dataset);

    //create a linklist: C A R L
    Node<char>* name1 = new_node('C');
    Node<char>* name2 = new_node('A');
    Node<char>* name3 = new_node('R');
    Node<char>* name4 = new_node('L');

    name1->next = name2;
    name2->next = name3;
    name3->next = name4;

    std::cout << "Linear Search result LL (Searching 'R' in CARL): " << std::endl;
    linearSearchLL(name1, 'R');

    std::cout << "Linear Search result LL (Searching 'B' in CARL): " << std::endl;
    linearSearchLL(name1, 'B');


    //Testing binary search linked list
    Node<int>* sortedList = new_node(1);
    sortedList->next = new_node(2);
    sortedList->next->next = new_node(3);
    sortedList->next->next->next = new_node(4);

    std::cout << "\nBinary Search result LL (Searching 2 in 1-2-3-4): " << std::endl;
    binarySearchLL(sortedList, 2);


    //Testing binary serach array
    const int sortedArrSize = 5;
    int sortedDataset[sortedArrSize] = {11, 12, 13, 14, 15};

    std::cout << "\nBinary Search result ARR: " << std::endl;
    std::cout << "What number to search in the sorted array (11, 12, 13, 14, 15)? ";
    std::cin >> userInput;
    binarySearchArr(sortedArrSize, userInput, sortedDataset);


    return 0;
}