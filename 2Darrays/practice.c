#include<stdio.h>
int main(){
    int a1[10][10],a2[10][10];
    int r,c;
    printf("Enter the numebr of rows:");
    scanf("%d",&r);
    printf("Enter the numebr of column:");
    scanf("%d",&c);
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&a1[i][j]);
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&a2[i][j]);
        }
    }
    int cr=3;
    int res[3][3];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            res[i][j]=0;
            for(int k=0;k<3;k++){
                res[i][j]=res[i][j]+(a1[i][k]*a2[k][j]);
            }
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",res[i][j]);
        }
        printf("\n");
    }
}