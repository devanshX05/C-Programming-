// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the number: ");
//     scanf("%d",&n);
//     int i=1;
//     int product=1;
//     while(i<=n){
//      product= product*i;
//       i=i+1;
//     }
//     printf("%d",product);
//     return 0;
// }

#include<stdio.h>
int main(){
    int n;
    printf("ENter the number: ");
    scanf("%d",&n);
    int i=1;
    int sum=0;
    while(i<=n){
        sum=sum+i;
        i=i+1;
    }
    printf("%d",sum);
    return 0;
    }