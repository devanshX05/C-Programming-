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
    int npr=factorial(n)/factorial(n-r);
    printf("%d",npr);
    return 0;
}
