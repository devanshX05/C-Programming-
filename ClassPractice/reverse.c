#include<stdio.h>
int main(){

    int num;
    int rem;
    int rev_num=0;
    printf("Enter the number: ");
    scanf("%d",&num);
    while(num>0){
        rem=num%10;
        rev_num=rev_num*10+rem;
        num=num/10;

    }
    printf("The reverse of a number is:%d",rev_num);
    return 0;
}