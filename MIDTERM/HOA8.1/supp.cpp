#include <iostream>
#include "SortingAlgo.h"
#include "suppheader.h"

int main() {
    int arr[] = {48, 21, 10, 15, 57, 29};
    int size = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Original Array: ";
    printArray(arr, size);

    //partitioning
    int pivotIdx = partition(arr, 0, size - 1);

    std::cout << "After Partition (Pivot = " << arr[pivotIdx];
    std::cout << " at index " << pivotIdx << "): ";
    printArray(arr, size);

    //sorting left sub list using insertion sort
    insertionSort(arr, 0, pivotIdx - 1);

    //sorting right sub list using insertion sort
    insertionSort(arr, pivotIdx + 1, size - 1);

    std::cout << "Final Fully Sorted Array: ";
    printArray(arr, size);

    return 0;
}
