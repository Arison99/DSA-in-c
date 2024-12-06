#include <stdio.h>

void bubblesort(int arrr[], int n) {
    int i, j, temp;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arrr[j] > arrr[j + 1]) {
                temp = arrr[j];
                arrr[j] = arrr[j + 1];
                arrr[j + 1] = temp;
            }
        }
    }
}


void printArray(int arr[], int size) {
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    bubblesort(arr, n);
    printf("Sorted array: \n");
    printArray(arr, n);
    return 0;
}