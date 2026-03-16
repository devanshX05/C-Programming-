// #include<stdio.h>
// int main(){
//     int a;
//     char b;
//     printf("Enter the number: ");
//     scanf("%d",&a);
//     b=(char)a;
//     printf("The character of the given number is:%c",b);
//     return 0;
// }

#include<stdio.h>
int main(){
    int a;
    char b;
    printf("Enter the number: ");
    scanf("%c",&b);
    a=(int)b;
    printf("The number of the given character is:%d",a);
    return 0;
}