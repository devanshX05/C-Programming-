// #include<stdio.h>
// int quick_sort(int arr[],int start,int end){
//     int pivot=arr[start];
//     int i=start;
//     int j=end;
//     while (i<j)
//     {
//         while(i<=end && arr[i]<=pivot){
//             i++;
//         }
//         while(arr[j]>pivot){
//             j--;
//         }
//         if(i<j){
//             int temp=arr[i];
//             arr[i]=arr[j];
//             arr[j]=temp;
//         }
//     }
//     arr[start]=arr[j];
//     arr[j]=pivot;

//     quick_sort(arr,start,j-1);
//     quick_sort(arr,j+1,end);
    
// }
// int main(){
//     int a1[10],a2[10],arr[20];
//     int n;
//     printf("Enter the size:");
//     scanf("%d",&n);
//     printf("Array 1\n");
//     for(int i=0;i<n;i++){
//         scanf("%d",&a1[i]);
//     }
//     printf("Array 2\n");
//     for(int i=0;i<n;i++){
//         scanf("%d",&a2[i]);
//     }
//     for(int i=0;i<n;i++){
//         arr[i]=a1[i];
//     }
//     for(int i=0;i<n;i++){
//         arr[n+i]=a2[i];
//     }
//     for(int i=0;i<2*n;i++){
//         printf("%d ",arr[i]);
//     }
//     quick_sort(arr,0,2*n-1);
//     printf("sorted array\n");

//     for(int i=0;i<2*n;i++){
//         printf("%d ",arr[i]);
//     }
//     return 0;
// }

#include <stdio.h>

void quick_sort(int arr[], int start, int end) {
    if (start >= end)   // ✅ base condition
        return;

    int pivot = arr[start];
    int i = start;
    int j = end;

    while (i < j) {
        while (i <= end && arr[i] <= pivot)
            i++;

        while (arr[j] > pivot)
            j--;

        if (i < j) {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    // place pivot correctly
    arr[start] = arr[j];
    arr[j] = pivot;

    // recursive calls
    quick_sort(arr, start, j - 1);
    quick_sort(arr, j + 1, end);
}

int main() {
    int a1[10], a2[10], arr[20];
    int n;

    printf("Enter the size: ");
    scanf("%d", &n);

    printf("Array 1:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a1[i]);
    }

    printf("Array 2:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a2[i]);
    }

    // merge arrays
    for (int i = 0; i < n; i++) {
        arr[i] = a1[i];
        arr[n + i] = a2[i];
    }

    printf("Merged array:\n");
    for (int i = 0; i < 2 * n; i++) {
        printf("%d ", arr[i]);
    }

    quick_sort(arr, 0, 2 * n - 1);

    printf("\nSorted array:\n");
    for (int i = 0; i < 2 * n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}