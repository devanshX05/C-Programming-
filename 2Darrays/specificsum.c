#include<stdio.h>
int main(){
   int  arr[3][3]={{1,2,3},{5,6,7},{8,1,7}};
   for(int i=0;i<=2;i=i+1){
    for(int j=0;j<=2;j=j+1){
        printf("%d ",arr[i][j]);
    }
    printf("\n");
   }
   int sum=0;
   for(int j=0;j<=2;j=j+1){
    sum = sum+arr[0][j];
    
   }
   printf("the sum of 1st row is=%d",sum);
   


    return 0;
}

