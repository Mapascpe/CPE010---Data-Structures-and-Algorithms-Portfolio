
#ifndef SUPPHEADER_H
#define SUPPHEADER_H

template <typename T>
void insertionSort(T arr[], int low, int high) {
    for (int i = low + 1; i <= high; i++) {
        T temp = arr[i];
        int j = i - 1;
        while (j >= low && arr[j] > temp) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
}

template <typename T>
void hybridQuickSort(T arr[], int low, int high) {
    if (low < high) {
        int pivotIndex = partition(arr, low, high);
        insertionSort(arr, low, pivotIndex - 1);
        insertionSort(arr, pivotIndex + 1, high);
    }
}

#endif
