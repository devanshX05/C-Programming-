#include<stdio.h>
int main(){
    int n;
    printf("Enter the number ");
    scanf("%d",&n);
    
    for(int i=1;i<=n;i=i+1){
         //no of rows with i
        for(int j=1;j<=n;j=j+1){ //no of column (stars in each line) with j
            printf(" %d",j);
            
        }
        printf("\n");
    }
    return 0;

}