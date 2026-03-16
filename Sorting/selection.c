#include<stdio.h>
int main(){
    int arr[80],mini_index;
    int n;
    printf("Enter the size of an array: ");
    scanf("%d",&n);
    for(int i=0;i<n;i=i+1){
        scanf("%d",&arr[i]);
    }
    
    for(int i=0;i<n-1;i=i+1){
        mini_index=i; //mini_index stores the index of the minimum value
        for(int j=i+1;j<n;j=j+1){
            if(arr[j]<arr[mini_index]){ //arr[j] ix the current running element
                mini_index=j; //smallest element find kr rahe hai unsorted part mei
            }
        }
        if(mini_index!=i){ //minimum wala aapni correct position pr hai ki ni...check and swap
            int temp=arr[i];
            arr[i]=arr[mini_index];
            arr[mini_index]=temp;

        }
    }
    printf("Array after selectrion sort:\n");
    for(int i=0;i<n;i=i+1){
        printf("%d ",arr[i]);
    }
    return 0;
}

