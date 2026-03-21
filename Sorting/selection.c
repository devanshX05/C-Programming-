#include<stdio.h>
int main(){
    int arr[80],mini_index_ele;
    int n;
    printf("Enter the size of an array: ");
    scanf("%d",&n);
    for(int i=0;i<n;i=i+1){
        scanf("%d",&arr[i]);
    }
    
    for(int i=0;i<n-1;i=i+1){
        mini_index_ele=i; //mini_index_ele stores the index of the minimum value of the array
        for(int j=i+1;j<n;j=j+1){
            if(arr[j]<arr[mini_index_ele]){ //unsortrd part ka element agar minimum wale se bhi chota hai to...
                mini_index_ele=j; //smallest element ko update kr denge sorted part mei..
            }
        }
        if(mini_index_ele!=i){ //minimum wala aapni correct position pr hai ki ni...check and swap
            int temp=arr[i];
            arr[i]=arr[mini_index_ele];
            arr[mini_index_ele]=temp;

        }
    }
    printf("Array after selectrion sort:\n");
    for(int i=0;i<n;i=i+1){
        printf("%d ",arr[i]);
    }
    return 0;
}

