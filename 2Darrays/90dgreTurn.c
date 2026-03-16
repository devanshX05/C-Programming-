//only for square matrix
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of rows/column: ");
    scanf("%d",&n); // as rows and column will be same because we sre swapping
    int arr[n][n];
    for(int i=0;i<n;i=i+1){
        for(int j=0;j<n;j=j+1){
            scanf("%d ",&arr[i][j]);
        }
    }
    for(int i=0;i<n;i=i+1){
        for(int j=0;j<n;j=j+1){
            int temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }
    //rotate
    for(int i=0;i<n;i=i+1){
          int j=0;//row no will remain same
          int k=n-1;
          while(j<k){
            //swap arr[i][j] & arr[j][k]
            int temp=arr[i][j];
            arr[i][j]=arr[j][k];
            arr[j][k]=temp;
            j=j+1;
            k=k-1;

          }

        
    }
    printf("\n");
    //output
    for(int i=0;i<n;i=i+1){
        for(int j=0;j<n;j=j+1){
           
            printf("%d  ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
//If we want to turn it by 90 degree then we have to first find the transpose then we just have 
//to reverse each row