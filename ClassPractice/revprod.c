#include<stdio.h>
int main(){
    int num;
    int rem;
    int rev_num=0;
    scanf("%d",&num);
    int numfinal=num;
    while(num>0){
        rem=num%10;
        rev_num=rev_num*10+rem;
        num=num/10;
    }
    if(rev_num==numfinal){
        printf("It is a palindorme");

    }
    else{
        printf("It is not a palindrome");
    }
    
    return 0;
}