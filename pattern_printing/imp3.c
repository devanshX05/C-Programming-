#include<stdio.h>
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    int nst=n;
    int nsp=1;
      int a=1;
    for(int i=1;i<=2*n+1;i=i+1){
      
        int b=a+64;
            char ch=(char)b;

            printf("%c",ch);
            a=a+1;
       
    }
    printf("\n");
    for(int i=1;i<=n;i=i+1){
        int a=1;
        
        for(int j=1;j<=nst;j=j+1){
            int b=a+64;
            char ch=(char)b;

            printf("%c",ch);
            a=a+1;
        }
        for(int k=1;k<=nsp;k=k+1){
            printf(" ");
        }
        for(int j=1;j<=nst;j=j+1){
            int b=a+64;
            char ch=(char)b;
            printf("%c",ch);
            a=a+1;
        }
        
         
             
        nst=nst-1;
        nsp=nsp+2;
        printf("\n");
    }
    return 0;
}

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enetr the number: ");
//     scanf("%d",&n);
//     int str=n;
//     int spc=1;
//     int a=1;
//     for(int i=1;i<=2*n+1;i=i+1){
//         int b=a+64;
//         char(ch)=(char)b;
//         printf("%c",ch);
        
//         a=a+1;
//     }
    
//     printf("\n");
//     for(int i=1;i<=n;i=i+1){
//         int a=1;
//         for(int j=1;j<=str;j=j+1){
//             int b=a+64;
//         char(ch)=(char)b;
//         printf("%c",ch);
            
//             a=a+1;
//         }
//         for(int k=1;k<=spc;k=k+1){
//             printf(" ");
//         }
//          for(int j=1;j<=str;j=j+1){
//             int b=a+64;
//         char(ch)=(char)b;
//         printf("%c",ch);
            
//             a=a+1;
//         }
       
//         str=str-1;
//         spc=spc+2;
//         printf("\n");

//     }
     
    

//     return 0;
// }