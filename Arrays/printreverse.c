#include<stdio.h>
int main(){
    int arr[5];
    for(int i=0;i<=4;i=i+1){
        printf("\nEnter element number %d: ",i+1); // imp way of writing the statement
        scanf("%d",&arr[i]);
    }
    for(int i=4;i>=0;i=i-1){
        printf("%d ",arr[i]);
    }
    return 0;
}