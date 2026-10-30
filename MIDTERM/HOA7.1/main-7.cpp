#include <iostream>
#include <cstdlib>
#include <time.h>
#include "sortingAlgo.h"


const int maxSize = 100;

void displayAll(int arr[]);

int main() {
    
    int unsortedArr[maxSize];

    srand(time(NULL));

    for (int i = 0; i < maxSize; i++) {
        unsortedArr[i] = rand() % 100;

    }
    displayAll(unsortedArr);

    std::cout << "\n Bubble sort" <<std::endl;
    bubbleSort(unsortedArr, maxSize);
    displayAll(unsortedArr);

    std::cout << "\n Selection Sort" <<std::endl;
    selectionSort(unsortedArr, maxSize);
    displayAll(unsortedArr);

    std::cout << "\n Insertion Sort" <<std::endl;
    insertionSort(unsortedArr, maxSize);
    displayAll(unsortedArr);


    return 0;
}

void displayAll(int arr[]) {
    for (int i = 0; i < maxSize; i++) {
        std::cout << arr[i] << "";
        std::cout << " ";

    }
    std::cout << std::endl;
}