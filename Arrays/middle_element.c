#include<stdio.h>
int main(){
    int arr[20], n;
    printf("enter the number of elements of an array:");
    scanf("%d",&n);
    for (int i =0;i<n;i++){
        printf("Enter the element no.%d:",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    int count =0;
    for (int i =0;i<n;i++){
        count++;
    }
    if(n%2!=0){
        int x=(count/2);//c is the index
        printf("%d",arr[x]);
    }
    else{
        int y=(count/2);
        int z=y-1;
        printf("%d,%d",arr[y],arr[z]);
    }
    return 0;
}