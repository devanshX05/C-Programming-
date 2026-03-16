//finding the row having max no. of 1 

#include<stdio.h>
int main(){
    int arr[3][4]={{1,0,0,1},{0,0,0,1},{1,1,1,0}};
    int maxcount=0;
    int maxindex=-1;
    for(int i=0;i<=2;i=i+1){
        int count=0;
        for(int j=0;j<=3;j=j+1){
            if(arr[i][j]==1){
                count=count+1;
            }
            if(maxcount<count){
                maxcount =count;
                maxindex=i;
            }
            // printf("%d ",arr[i][j]);

        }
        printf("\n");
    }
    printf("%d",maxindex);

    return 0;
}