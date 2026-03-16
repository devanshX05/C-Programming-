#include<stdio.h>
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
     
     
    for(int i=1;i<=n;i=i+1){
       int a=1;
          
        for(int j=1;j<=n+1-i;j=j+1){
            int d=a+64; //this means that if the value of d is 65
            char ch=(char)d;//then char of d= "A"
            
            printf("%c ",ch);
            a=a+1;
        }
        printf("\n");
    }
    return 0;
}