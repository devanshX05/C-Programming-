#include<stdio.h>
int factorail(int);
int add(int a,int b){
    int c=a+b;
    return c;
}
int main(){
    int a;
    printf("Enter the number: ");
    scanf("%d",&a);
    int b;
    printf("Enter the number: ");
    scanf("%d",&b);
    int ans=add(a,b);
    printf("%d ",ans);
    int ANS=factorail(ans);
    printf("%d",ANS);
    return 0;
}
int factorail(int ans){
    int fact=1;
    for(int i=1;i<=ans;i=i+1){
        fact=fact*i;

    }
    return fact;
}
