#include<stdio.h>
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    int a=1;
    for(int i=1;i<=n;i=i+1){
        
      
        for(int j=1;j<=i;j=j+1){
            if(i%2==0){
                int b=a+64;
                char(ch)=(char)b;
                printf("%c ",ch);
                a=a+1;
            }
            else{
                printf("%d ",j);
                a=a+1;
            }
        }
        printf("\n");
    }
    return 0;
}