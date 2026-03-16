#include<stdio.h>
int main(){

    int num;
    int rem;
    int sum=0;
    printf("Enter the number: ");
    scanf("%d",&num);
    while(num>0){
        rem=num%10;
        sum=sum+rem;
        num=num/10;

    }
    printf("The sum of the digits of a number is:%d",sum);
    return 0;
}