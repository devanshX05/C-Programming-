#include<stdio.h>
int main(){
    int a,c;
    char b,d;
    printf("Enter the lower Character: ");
    scanf("%c",&b);
    a=(int)b;
    c=a-32;
    d=(char)c;
    printf("The upper character is: %c",d);
    
    return 0;
}