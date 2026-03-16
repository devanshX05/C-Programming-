#include<stdio.h>
int main(){
    int arr[50],key,n,found=0;
    printf("Enter the number of elements in array: ");
    scanf("%d",&n);
     printf("Enter the element of array: ");
    for(int i=0;i<n;i=i+1){
        scanf("%d",&arr[i]);
       
    }
    printf("Enter the element to be found: ");
    scanf("%d",&key);  //jo elemnt enter kr rahe hai usse key denote kr rahe hai
    for(int i=0;i<n;i=i+1){
        if(arr[i]==key){
            printf("The elemrnt %d foud at %d\n",key,i+1);
            found=1;
            break;
        }
    }
    if(!found ){
        printf("Element not found");
    }
    return 0;
}