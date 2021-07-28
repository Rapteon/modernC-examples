#include <stdio.h>
#include <stdbool.h>

void printArray(int *arr, const size_t len);
void insertionSort(int *arr, const size_t len);

int main(void) {
    int arr[] = {5, 4, 3, 2, 1};
    printArray(arr, 5);
    insertionSort(arr, 5);
    printArray(arr, 5);
}

void printArray(int *arr, const size_t len) {
    for (size_t i = 0; i < len; ++i)
        printf("%d ", arr[i]);
    puts("");
}

void insertionSort(int *arr, const size_t len) {
    bool hasSlid = true;
    while (hasSlid) {
        hasSlid = false;
        for (size_t i = 0; i < len; ++i) {
            size_t j = i-1;
            while (j >= 0 && arr[j] > arr[i]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                hasSlid = true;
            }
        }
    }
}
