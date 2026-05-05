#include <stdio.h>

// Quick Sort function
void quickSort(int arr[], int start, int end) {
    if (start >= end)
        return;

    int pivot = arr[start];   // pivot = first element
    int i = start;
    int j = end;

    while (i < j) {
        // move i forward
        while (arr[i] <= pivot && i < end)
            i++;

        // move j backward
        while (arr[j] > pivot)
            j--;

        // swap if needed
        if (i < j) {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    // place pivot in correct position
    arr[start] = arr[j];
    arr[j] = pivot;

    // recursive calls
    quickSort(arr, start, j - 1);
    quickSort(arr, j + 1, end);
}

// Main function
int main() {
    int arr[] = {5, 3, 8, 4, 2};
    int n = 5;

    quickSort(arr, 0, n - 1);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}