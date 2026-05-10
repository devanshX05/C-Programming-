#include <stdio.h>

// merge function - do sorted parts ko merge karega
void merge(int arr[], int l, int mid, int r) {
    int i = l;        // left part start
    int j = mid + 1;  // right part start
    int k = 0;

    int temp[100]; // temporary array (extra space)

    // dono parts ko compare karte jao
    while(i <= mid && j <= r) {
        if(arr[i] < arr[j]) {
            temp[k++] = arr[i]; // chhota element uthao
            i++;
        } else {
            temp[k++] = arr[j];
            j++;
        }
    }

    // agar left side mein elements bache hain
    while(i <= mid) {
        temp[k++] = arr[i];
        i++;
    }

    // agar right side mein elements bache hain
    while(j <= r) {
        temp[k++] = arr[j];
        j++;
    }

    // temp array ko original array mein copy back karo
    for(i = l, k = 0; i <= r; i++, k++) {
        arr[i] = temp[k];
    }
}

// recursive function
void mergeSort(int arr[], int l, int r) {
    if(l < r) {
        int mid = (l + r) / 2;

        // left part sort karo
        mergeSort(arr, l, mid);

        // right part sort karo
        mergeSort(arr, mid + 1, r);

        // dono sorted parts ko merge karo
        merge(arr, l, mid, r);
    }
}

int main() {
    int arr[] = {5, 2, 9, 1};
    int n = 4;

    mergeSort(arr, 0, n - 1);

    // sorted array print
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}