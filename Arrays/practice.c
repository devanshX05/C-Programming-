#include<stdio.h>
int binary_serach(int a[],int key,int size){
    int left=0,right=size-1;
    while(left<=right){
        int mid=(left+right)/2;
        if(a[mid]==key){
            return mid;
        }
        else if(key>a[mid]){
            left=mid+1;
        }
        else{
            right=mid-1;
        }
    }
    return -1;
}
int main(){
    int arr[50],n,key=10;
    printf("Entenr the number of elements in array: ");
    scanf("%d",&n);
     printf("Enter the element of array: ");
    for(int i=0;i<n;i=i+1){
        scanf("%d",&arr[i]);
    }
    int result=binary_serach(arr,key,n);
    if(result!=-1){
        printf("ELelment found");
    }
    else{
        printf("Not found");
    }

    return 0;
}

