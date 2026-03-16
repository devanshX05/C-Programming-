#include<stdio.h>
int sum(int n){
    if(n==1 || n==0) return 1;
    return n + sum(n-1);
}
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    int ans= sum(n);
    printf("%d",ans);  // same as that of factorial code 
    return 0;
}