// #include<stdio.h>
// int main(){
//     int n,first=0,second=1,next;
//     printf("ENter the number: ");
//     scanf("%d",&n);
//     for(int i=0;i<=n;i++){
//         printf("%d ",first);
//         next=first+second;
//         second=first;
//         first=next;

//     }
//     return 0;
// }

#include<stdio.h>
int fibo(int n){
    if(n==0) return 0;
    if(n==1 || n==2) return 1;
    int a1=fibo(n-1);
    int a2=fibo(n-2);
    int ans=a1+a2;
    return ans;

}
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        printf("%d ",fibo(i));
    }
    
    return 0;
}