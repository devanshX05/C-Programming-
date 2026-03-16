#include<stdio.h>
int main(){
    int a=5;
    int* x=&a;
    *x=7;  //this is changing the value of a
    printf("%d",a);
    return 0;

}