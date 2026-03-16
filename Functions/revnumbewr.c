#include<stdio.h>
int reverse(int n){
    int rev_num=0;
    int num=n,rem;
    while (num>0){
        rem=num%10;
        rev_num=rev_num*10+rem;
        num=num/10;
        
    }
    return rev_num;
}
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    int result=reverse(n);
    printf("%d",result);
    return 0;
}