#include<stdio.h>
int reverse(int n){
    int num=n,rem;
    int rev_num=0;
    while(num>0){
        rem=num%10;
        rev_num=rev_num*10+rem;
        num=num/10;
    }
    printf("%d",rev_num);
    return rev_num;
}
int main(){
    int n;
    printf("Enter the numebr: ");
    scanf("%d",&n);
    int ans=reverse(n);
    printf("%d",ans);
    return 0;
}