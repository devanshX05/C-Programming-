#include<stdio.h>
int main(){
    int r;
    printf("Enter the no of rows: ");
    scanf("%d",&r);
    int c;
    printf("Enter the no of columns: ");
    scanf("%d",&c);
    int arr[r][c];
    for(int i=0;i<r;i=i+1){
        for(int j=0;j<c;j=j+1){
            scanf("%d",&arr[i][j]);
            }
    }
    printf("\n");
    for(int i=0;i<r;i=i+1){
        for(int j=0;j<c;j=j+1){
            printf("%d ",arr[i][j]);
            }
            printf("\n");
    }
    
    for(int i=0;i<r;i=i+1){
        for(int j=0;j<c;j=j+1){
           int temp=arr[i][j];
           arr[i][j]=arr[j][i];
           arr[j][i]=temp;
        }
    }
    for(int i=0;i<r;i=i+1){
        for(int j=0;j<c;j=j+1){
           printf("%d ",arr[j][i]);
        }
        printf("\n");
    }



    return 0;
}