// #include<stdio.h>
// int  factorial(int x){
//     int fact=1;
//     for(int i=1;i<=x;i=i+1){
//         fact=fact*i;
//     }

//     return fact;
// }
// int main(){
//     int n;
//     printf("Enter the value: ");
//     scanf("%d",&n);
//     int ans=factorial(n);
//     printf("%d",ans);
//     return 0;
// }

#include<stdio.h>
int main(){
    int n;
    printf("Enter the value: ");
    scanf("%d",&n);
    int factorial=1;
    int i;
    for(i=1;i<=n;i=i+1){
        factorial=factorial*i;
         
    }
   printf("%d",factorial);

    return 0;
}
