#include<stdio.h>
int main(){
    int next,n;
    printf("Enter the number: ");
    scanf("%d",&n);
    int first=0;
    int second=1;
    for(int i=1;i<n;i=i+1){
        printf("%d ",first);
        next=first+second;
        first=second;
        second=next;

    }
    return 0;
}