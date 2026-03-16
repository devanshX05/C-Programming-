#include<stdio.h>
int main(){
    int num,numfinal;
    int rem;
    int rev_num=0;
    
    printf("Enter the number: ");
    scanf("%d",&num);
    numfinal=num;
    while(num>0){
        rem=num%10;
        rev_num=rev_num*10+rem;
        num=num/10;
    }
    if(rev_num==numfinal){
        printf("it is a pidrone");
    }
    else{
        printf("It is not a palidrone");
    }
    return 0;
}