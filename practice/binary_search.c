#include<stdio.h>
int binarysearch(int arr[],int size,int key){
    int left=0,right=size-1,mid;
    while(left<=right){
        mid=(left+right)/2;
        if(arr[mid]==key){
            printf("Element found at index %d\n",mid);
            return;
        }
        else if(arr[mid]<key){
            left=mid+1;
        }
        else{
            right=mid-1;
        }
        
    }
    return -1;
}
int main(){
    int arr[10],size,key;
    printf("Enter the size of an array:");
    scanf("%d",&size);
    for(int i=0;i<size;i++){
        printf("Enter element %d:",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Enter the value to be found:");
    scanf("%d",&key);
    int result=binarysearch(arr,size,key);
    if(result!=-1){
        printf("Element found");
    }
    else{
        printf("Element not found at any index\n");
    }
    return 0;
}