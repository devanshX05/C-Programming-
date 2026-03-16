#include<stdio.h>
int main(){
      int arr[5];
      for(int i=0;i<=4;i=i+1){
        printf("Enter %dst no: ",i+1);
        scanf("%d",&arr[i]);  //idhar arr[i] elements ki baat kr raha hai(kaun kaun se elemnents hai)
        //not the position of the ekement 
      }
      int sum=0;
      for(int i=0;i<=4;i=i+1){
        sum=sum+arr[i];
      }
      printf("%d",sum);
    return 0;
}