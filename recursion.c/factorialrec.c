// With recurtion

// #include<stdio.h>
// int factorial(int n){
//     if(n==0) return 1;
//     return n*factorial(n-1);
// }
// int main(){
//     int n;
//     printf("Enter the number: ");
//     scanf("%d",&n);
//     int ans= factorial(n);
//     printf("%d",ans);
//     return 0;
// }

//Without Recurtion

#include<stdio.h>
int factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i=i+1){
     fact=fact*i;
     
    }
    return fact;
}
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    int ans= factorial(n);
    printf("%d",ans);
    return 0;
}