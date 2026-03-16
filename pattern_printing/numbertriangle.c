// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the number: ");
//     scanf("%d",&n);
    
//     for(int i=1;i<=n;i=i+1){
        
//         for(int j=1;j<=n+1-i;j=j+1){
//             printf("%d ",j);
          
//         }
        
//         printf("\n");
//     }

//     return 0;
// }


   

#include<stdio.h>
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
      
    for(int i=1;i<=n;i=i+1){
         int a=1;
        
        for(int j=1;j<=i;j=j+1){
            printf("%d ",a);
            a=a+1;
        }
        printf("\n");
    }

    return 0;
}