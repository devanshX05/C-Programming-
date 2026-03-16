#include<stdio.h>
int main(){
    int x,y;
    char a,b;
    printf("Enter the character: ");
    scanf("%c",&a);
    x=(int)a;
    y=x-32;
    b=(char)y;
    printf("Ans: %c",b);
    
    return 0;
}