// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the value: ");
//     scanf("%d",&n);
//     int sum=0;
//     int i;
//     for(i=1;i<=n;i=i+1){
//         sum=sum+i;
         
//     }
//    printf("%d",sum);

//     return 0;
// }

#include<stdio.h>
int main(){
    int n;
    printf("Enter the value: ");
    scanf("%d",&n);
    int product=1;
    int i;
    for(i=1;i<=n;i=i+1){
        product=product*i;
         
    }
   printf("%d",product);

    return 0;
}

