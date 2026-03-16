// #include<stdio.h>
// int add(int a,int b){
//     int c=a+b;
//     return c;
// }
// int main(){
//     int a;
//     printf("Enter the number: ");
//     scanf("%d",&a);
//     int b;
//     printf("Enter the number: ");
//     scanf("%d",&b);
//     int ans=add(a,b);
//     printf("%d",ans);
//     return 0;
// }

// #include<stdio.h>
// int sum(int n){
//     if(n==0 || n==1) return 1;
//     return n+sum(n-1);
// }
// int main(){
//     int n;
//     printf("Enter the number: ");
//     scanf("%d",&n);
//     int ans=sum(n);
//     printf("%d",ans);
// }


#include<stdio.h>
int main(){
    int rem,num;
    int n;
    printf("Enter the number: ");
    scanf("%d",&num);
    int arm=0;
    int num_final=num;;
    while(num>0){
        rem=num%10;
        arm=arm+(rem*rem*rem);
        num=num/10;
    }
    if(num_final==arm){
        printf("yes");

    }
    else{
        printf("no");
    }
    return 0;
}