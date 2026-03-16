// #include<stdio.h>
// int power(int a,int b){
   
//     int x=1;
//     for(int i=1;i<=b;i=i+1){
//         x=x*a;
//     }
//     return x;
// }
// int main(){
//     int a;
//     printf("Enter the base: ");
//     scanf("%d",&a);
//     int b;
//     printf("Enter the pow: ");
//     scanf("%d",&b);
//     int ans=power(a,b);
//     printf("%d",ans);
//     return 0;
// }
#include<stdio.h>
#include<math.h>
int main(){
    int a;
    printf("Enter the base: ");
    scanf("%d",&a);
    int b;
    printf("Enter the pow: ");
    scanf("%d",&b);
    int ans=pow(a,b);
    printf("%d",ans);
    
    return 0;
}