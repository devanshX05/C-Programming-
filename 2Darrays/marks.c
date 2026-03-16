#include<stdio.h>
int main(){
    int arr[4][2];
    for(int i=0;i<=3;i=i+1){
        for(int j=0;j<=1;j=j+1){
            scanf("%d ",&arr[i][j]);

        }
}
for(int i=0;i<=3;i=i+1){
        for(int j=0;j<=1;j=j+1){
           printf("%d ",arr[i][j]);

        }
        printf("\n");
}

    return 0;
}