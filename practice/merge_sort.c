#include <stdio.h>

int main() {
    int arr[] = {5, 2, 4, 6, 1, 3};
    int n = 6;

    int temp[100];
    int size, left;

    // Bottom-up merge sort
    for (size = 1; size < n; size = size * 2) {
        for (left = 0; left < n; left += 2 * size) {

            int mid = left + size - 1;
            int right = left + 2 * size - 1;

            if (mid >= n - 1)
                continue;
            if (right >= n)
                right = n - 1;

            int i = left, j = mid + 1, k = left;

            // Merge
            while (i <= mid && j <= right) {
                if (arr[i] < arr[j])
                    temp[k++] = arr[i++];
                else
                    temp[k++] = arr[j++];
            }

            while (i <= mid)
                temp[k++] = arr[i++];

            while (j <= right)
                temp[k++] = arr[j++];

            // Copy back
            for (i = left; i <= right; i++)
                arr[i] = temp[i];
        }
    }

    // Print sorted array
    printf("Sorted array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
} 