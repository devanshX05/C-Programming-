// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the number: ");
//     scanf("%d",&n);
//     int nst=n;
//     int nsp=1;
//     for(int i=1;i<=n;i=i+1){
        
//         for(int j=1;j<=nst;j=j+1){
//             printf("*");
//         }
//         for(int k=1;k<=nsp;k=k+1){
//             printf(" ");
//         }
//         for(int j=1;j<=nst;j=j+1){
//             printf("*");
//         }
//         nst=nst-1;
//         nsp=nsp+2;
//         printf("\n");
//     }
//     return 0;
// }

#include<stdio.h>
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    int nst=n;
    int nsp=1;
    for(int i=1;i<=2*n+1;i=i+1){
        printf("*");
    }
    printf("\n");
    for(int i=1;i<=n;i=i+1){
        
        for(int j=1;j<=nst;j=j+1){
            printf("*");
        }
        for(int k=1;k<=nsp;k=k+1){
            printf(" ");
        }
        for(int j=1;j<=nst;j=j+1){
            printf("*");
        }
        nst=nst-1;
        nsp=nsp+2;
        printf("\n");
    }
    return 0;
}