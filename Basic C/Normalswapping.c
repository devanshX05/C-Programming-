#include<stdio.h>
int main(){
    int a,b;
    printf("A=");
scanf("%d ",&a);
printf("B=");
scanf("%d",&b);
int temp=a;
a=b;
b=temp;
printf("A=%d",a);
printf("B=%d",b);
    return 0;
}