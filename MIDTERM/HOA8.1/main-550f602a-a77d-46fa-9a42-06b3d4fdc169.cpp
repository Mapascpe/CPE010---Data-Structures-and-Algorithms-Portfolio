#include <iostream>
#include <cstdlib>
#include <time.h>
#include "SortingAlgo.h"

const int SIZE = 100;


int main() {
    int unsorted[SIZE];
    int shellArr[SIZE], mergeArr[SIZE], quickArr[SIZE];

    srand(time(NULL));
    for (int i = 0; i < SIZE; i++) {
        unsorted[i] = rand() % 100;
        shellArr[i] = unsorted[i];
        mergeArr[i] = unsorted[i];
        quickArr[i] = unsorted[i];
    }

    std::cout << "Unsorted" << std::endl;
    printArray(unsorted, SIZE);

    std::cout << "Testing Shell Sort" << std::endl;
    shellSort(shellArr, SIZE);
    printArray(shellArr, SIZE);

    std::cout << "Testing Merge Sort" << std::endl;
    mergeSort(mergeArr, 0, SIZE - 1);
    printArray(mergeArr, SIZE);

    std::cout << "Testing Quick Sort" << std::endl;
    quickSort(quickArr, 0, SIZE - 1);
    printArray(quickArr, SIZE);


    return 0;
}