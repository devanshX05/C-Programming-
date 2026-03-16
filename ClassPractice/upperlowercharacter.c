// #include<stdio.h>
// int main(){
//     int a,d;
//     char b,c;
//     printf("Enter the Upper character: ");
//     scanf("%c",&b);
//     a=(int)b;
//     d=a+32;
//     c=(char)d;
//     printf("The lower character is:%c",c);

//     return 0;
// }


#include<stdio.h>
int main(){
    int a,d;
    char b,c;
    printf("Enter the lower character: ");
    scanf("%c",&b);
    a=(int)b;
    d=a-32;
    c=(char)d;
    printf("The Upper character is:%c",c);

    return 0;
}