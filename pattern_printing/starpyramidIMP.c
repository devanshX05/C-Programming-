//Star Traingle/Pyramid

#include<stdio.h>
int main(){
    int n;
    printf("Enter the number ");
    scanf("%d",&n);
    for(int i=1;i<=n;i=i+1){
        for(int j=1;j<=n-i;j=j+1){
            printf(" ");
           
        }
         for(int k=1;k<=i;k=k+1){
                printf("* ");
            }
        printf("\n");
    }
    return 0;

}

//  Number trianle/Pyramid

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the number ");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i=i+1){
//         for(int j=1;j<=n-i;j=j+1){
//             printf(" ");
           
//         }
//          for(int k=1;k<=i;k=k+1){
//                 printf("%d ",k);
//             }
//         printf("\n");
//     }
//     return 0;

// }

// //Alphabet triangle/Pyramid
// #include<stdio.h>
// int main(){
//    int n;
//    printf("Enter the number: ");
//    scanf("%d",&n);
//    for(int i=1;i<=n;i=i+1){
//     int a;
//     for(int j=1;j<=n-i;j=j+1){
//         printf(" ");
//     }
//     for(int k=1;k<=i;k=k+1){
//         printf("%d ",a);
//         a=a+1;
//     }
//     printf("\n");
//    }
//     return 0;

// }