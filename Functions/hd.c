#include<stdio.h>
int factorial(int x){
    int fact=1;
   for(int i=1;i<=x;i=i+1){
    fact=fact*i;
   }
   return fact;
}
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    int r;
    printf("Enter the number: ");
    scanf("%d",&r);
    int ncr=factorial(n)/(factorial(r)*factorial(n-r));
    printf("%d",ncr);
    return 0;
}