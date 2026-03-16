#include<stdio.h>
int main(){
    int arr[80];
    int n;
    printf("Enter the size of an array: ");
    scanf("%d",&n);
    for(int i=0;i<n;i=i+1){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n-1;i=i+1){
        for(int j=0;j<n-i-1;j=j+1){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }

        
    }
    printf("Array after bubble sorting:\n");
    for(int i=0;i<n;i=i+1){
        printf("%d ",arr[i]);
    }
    return 0;
}