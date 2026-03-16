//this code will give you the no. of terms in fibonaci series not the full series

// #include<stdio.h>
// int fibo (int n){
//      if(n==1 || n==2) return 1;
//      int a1= fibo(n-1);
//      int a2= fibo(n-2);
//      int ans=a1+a2;
     
//      return ans;
// }
// int main(){
//     int n;
//     printf("Enter the number: ");
//     scanf("%d",&n);
//     int x=fibo(n);
//     printf("%d ",x);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int n,next;
//     int first=0;
//     int second=1;
//     scanf("%d",&n);
    
//     for(int i=1;i<=n;i=i+1){
//         printf("%d ",first);
//         next=first+second;
//         first=second;
//         second=next;
//     }

//     return 0;
// }
#include<stdio.h>
int fibo(int n){
    if(n==0) return 0;
    if(n==1 || n==2) return 1   ;
    int a1=fibo(n-1);
    int a2=fibo(n-2);
    int ans=a1+a2;
    return ans;
}
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(int i=0;i<=n;i=i+1){
int ans=fibo(i);
printf("%d ",ans);
    }
    
    // printf("%d ",ans);
    return 0;
}