// #include<stdio.h>
// #include<math.h>
// int  main(){
//     int a;
//     printf("Enter the number ");
//     scanf("%d",&a);

//     int root= sqrt(a);
//     printf("The square root is: %d",root);
//     return 0;
// }

#include<stdio.h>
#include<math.h>
int main(){
int a;
printf("Enter the base: ");
scanf("%d",&a);
int ans=pow(a,3);
printf("%d",ans);
return 0;
}
