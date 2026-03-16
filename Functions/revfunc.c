#include<stdio.h>
int rev(int n){
    int num=n;
    int rev_num=0;
    int rem;
    while(num>0){
        rem=num%10;
        rev_num=rev_num*10+rem;
        num=num/10;
    }

return rev_num;
}
int main(){
    int n;
    printf("Enter : ");
    scanf("%d",&n);
    int ans=rev(n);
    printf("The reverse of a number is: %d",ans);
    return 0;
}