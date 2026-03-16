#include<stdio.h>
int main(){
    int n;
    printf("Enter the no. of rows ");
    scanf("%d",&n);
    int m;
    printf("Enter the no. of column ");
    scanf("%d",&m);
    for(int i=1;i<=n;i=i+1){ //no. of rows will always be the outermost loop
        for(int i=1;i<=m;i=i+1){ //no. of stars will be the inner loop
            printf("*");
        }
        printf("\n");
    }
    return 0;
}