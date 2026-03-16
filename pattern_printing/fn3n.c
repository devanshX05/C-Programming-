// #include<stdio.h>
// int main(){
//     int n;
//     printf("Eneter the number: ");
//     scanf("%d",&n);
//     int str=n;
//     int spc=1;
//     for(int i=1;i<+2*n+1;i++){
//         printf("*");
//     }
//     printf("\n");
//     for(int i=1;i<n;i=i+1){
//         for(int j=1;j<=str;j=j+1){
//             printf("*");
//         }
//         for(int k=1;k<=spc;k=k+1){
//             printf(" ");
//         }
//         for(int j=1;j<=str;j=j+1){
//         printf("*");
//     }
//      str=str-1;
//      spc=spc+2;
//      printf("\n");
        
//     }
//     return 0;
// }
#include<stdio.h>
int main(){
     int n;
     printf("ENter the number: ");
     scanf("%d",&n);
     for (int i=1;i<=n;i=i+1){
        for (int j=1;j<=n-i;j=j+1){
            printf(" ");
        }
        for(int k=1;k<=2*i-1;k=k+1){
            printf("*");
    }
    printf("\n");

     }
     for (int i=1;i<=n;i=i+1){
        for(int k=1;k<=i;k=k+1){
            printf(" ");
        }
        for(int j=1;j<=2*n-(2*i-1);j=j+1){
            printf("*");
        }
printf("\n");
     }
    return 0;
}