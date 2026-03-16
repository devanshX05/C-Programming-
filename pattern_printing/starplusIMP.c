#include <stdio.h>
int main(){
    int n;
    printf("Enter the number ");
    scanf("%d",&n); 
    for(int i=1;i<=n;i=i+1){
      for(int j=1;j<=n;j=j+1){ 
         int a=n/2+1;  //pattern analysis through mathematics
         if(j==a || i==a)
            printf("*");
         
         else
            printf(" ");
         
        
      }
       printf("\n");
    }
    return 0;
    
}