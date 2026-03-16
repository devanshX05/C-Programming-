// #include<stdio.h>
// int main(){
//     int r;
//     printf("ENter the number of rows: ");
//     scanf("%d",&r);
//     int c;
//     printf("ENter the number of columns: ");
//     scanf("%d",&c);
//     int arr[r][c];   
//     for(int i=0;i<r;i=i+1){
//         for(int j=0;j<c;j=j+1){
//             scanf("%d",&arr[i][j]);
//         }
//     }
//      printf("\n");
//     int brr[c][r];
   
//     for(int i=0;i<r;i=i+1){
//         for(int j=0;j<c;j=j+1){
//             // printf("%d",arr[i][j]);
//             brr[j][i]=arr[i][j];
//         }
// printf("\n");
//     }
//     for(int i=0;i<c;i=i+1){
//         for(int j=0;j<i;j=j+1){
//             printf("%d ",brr[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// Without using extra matrix...(SWAPPING)
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
    printf("\n");
    for(int i=0;i<n;i=i+1){
        for(int j=0;j<n;j=j+1){
            int temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }
    for(int i=0;i<n;i=i+1){
        for(int j=0;j<n;j=j+1){
           
            printf("%d  ",arr[j][i]);
        }
        printf("\n");
    }
    return 0;
}
