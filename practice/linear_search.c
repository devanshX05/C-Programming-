#include<stdio.h>
int main(){
int arr[10];
int size,key,found=0;
printf("Enter the size of an array:");
scanf("%d",&size);
for(int i=0;i<size;i++){
    printf("Enter element %d:",i+1);
    scanf("%d",&arr[i]);
}
printf("Enter the value to be found:");
scanf("%d",&key);
for(int i=0;i<size;i++){
    if(arr[i]==key){
        printf("Element found at index %d\n",i);
        found=1;
        break;
    }
}
    if(!found){
        printf("Element not found at any index\n");
    }
    return 0;
}