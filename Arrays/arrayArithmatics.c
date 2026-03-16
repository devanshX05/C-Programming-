// #include<stdio.h>
// int main(){
//       int arr[5];
//       for(int i=0;i<=4;i=i+1){
//         printf("Enter %dst no: ",i+1);
//         scanf("%d",&arr[i]);  //idhar arr[i] elements ki baat kr raha hai(kaun kaun se elemnents hai)
//         //not the position of the ekement 
//       }
//       int sum=0;
//       for(int i=0;i<=4;i=i+1){
//         sum=sum+arr[i];
//       }
//       printf("%d",sum);
//     return 0;
// }

#include<Stdio.h>
int main(){
  int arr[5];
  for(int i=0;i<=4;i=i+1){
    printf("ENter %dst number: ",i+1);
    scanf("%d",&arr[i]);
  }
  int product=1;
  for(int i=1;i<=4;i=i+1){
    product=product*arr[i];
    printf("%d",product);
    
  }
  return 0;
}