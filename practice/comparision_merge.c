#include <stdio.h>

int count = 0;  
void merge(int arr[], int l, int m, int r) {
    int i = l, j = m + 1, k;
    int temp[100];

    for (k = l; i <= m && j <= r; k++) {
        count++;  // counting comparison
        if (arr[i] < arr[j])
            temp[k] = arr[i++];
        else
            temp[k] = arr[j++];
    }

    while (i <= m)
        temp[k++] = arr[i++];

    while (j <= r)
        temp[k++] = arr[j++];

    for (i = l; i <= r; i++)
        arr[i] = temp[i];
}
 
void mergeSort(int arr[], int l, int r) {
    if (l < r) {
        int m = (l + r) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}

int main() {
    int arr[] = {5, 2, 4, 6, 1, 3};
    int n = 6;

    mergeSort(arr, 0, n - 1);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\nNumber of comparisons: %d", count);

    return 0;
}