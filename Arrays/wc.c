#include<stdio.h>
int binarysearch(int a[],int size,int n){
    int left=0,right=size-1;
    while(left<=right){
        int mid=(left+right)/size;
        if(n==a[mid]){
            return mid;
        }
        else if(n>mid){
            left=mid+1;
        }
        else{
            right=mid-1;
        }
    }
    return -1;
}
int main() {
    int arr[] = {2, 4, 6, 8, 10, 12, 14};
    int size = sizeof(arr) / sizeof(arr[0]); //number of elements = total size / size of one element
    int target = 10;

    int result = binarySearch(arr, size, target);

    if (result != -1)
        printf("Element found at index %d\n", result);
    else
        printf("Element not found\n");

    return 0;
}