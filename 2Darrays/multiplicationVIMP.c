// //Multiplication of matrices
// // a[m][n]*b[p][q]......... where *n==p and then resultant is r[m][q]

// #include<stdio.h>
// int main(){
//     int arr[3][2];
//     for(int i=0;i<3;i=i+1){
//         for(int j=0;j<2;j=j+1){
//             scanf("%d",&arr[i][j]);
//         }
// }
// int brr[3][4];
//  for(int i=0;i<3;i=i+1){
//         for(int j=0;j<4;j=j+1){
//             scanf("%d",&brr[i][j]);
//         }
// }
// int cr=2;
// int res[3][4];
// for(int i=0;i<3;i=i+1){
//     for(int j=0;j<4;j=j+1){
//         res[i][j]=0;
//         for(int k=0;k<cr;k=k+1){
//             res[i][j]=arr[i][k]*brr[k][j];
//         }
//     }
// }
// for(int i=0;i<3;i=i+1){
//     for(int j=0;j<4;j=j+1){
//         printf("%d ",res[i][j]);
//     }
//     printf("\n");
// }

//     return 0;
// }


#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter the order of square matrix: ");
    scanf("%d", &n);

    int matrix[n][n];

    printf("Enter elements of the matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Upper Triangular Matrix:\n");

    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if(i <= j)
                printf("%d ", matrix[i][j]);
            else
                printf("0 ");
        }
        printf("\n");
    }

    return 0;
}