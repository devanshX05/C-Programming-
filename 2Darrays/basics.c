// #include<stdio.h>
// int main(){
//     int arr[2][2]={{1,2},{3,4}}; //this way also
//     // arr[0][0]=1;  // can be written in this way also
//     // arr[0][1]=2;
//     // arr[1][0]=3;
//     // arr[1][1]=4;
//     for(int i=0;i<=1;i=i+1){ //representing rows
//         for(int j=0;j<=1;j=j+1){ //representing columns 
//             printf("%d ",arr[i][j]);
//         }
//         printf("\n");
//     }
  
//     return 0;
// }

//User input

// #include<stdio.h>
// int main(){
//     int arr[3][3];  //total 9 elements
//     for(int i=0;i<=2;i=i+1){
//         for(int j=0;j<=2;j=j+1){
//             scanf("%d",&arr[i][j]);
//         }
//     }
//     for(int i=0;i<=2;i=i+1){
//         for(int j=0;j<=2;j=j+1){
//             printf("%d ",arr[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

#include<stdio.h>
int main(){
    int r;
    printf("ENter the number of rows: ");
    scanf("%d",&r);
    int c;
    printf("ENter the number of columns: ");
    scanf("%d",&c);
    int arr[r][c];  //total 9 elements
    for(int i=0;i<r;i=i+1){
        for(int j=0;j<c;j=j+1){
            scanf("%d ",&arr[i][j]);
        }
    }
    printf("\n");
    for(int i=0;i<r;i=i+1){
        for(int j=0;j<c;j=j+1){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}

// #include<stdio.h>
// int main(){
//     int arr[5][5]={{10,10,10,10,10},{10,10,10,10,10}};
//     for(int i=0;i<=4;i=i+1){
//         for(int j=0;j<=4;j=j+1){
//             printf("%d ",arr[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }