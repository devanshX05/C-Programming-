#include<stdio.h>
int main(){
    int a,b,c;
    scanf(" %d",&a); 
    scanf("%d",&b);
    scanf(" %d",&c);
    if(a>b){
        if(a>c){
            printf("a is the greatest integer");
        }
        else{
            printf("c is the greatest integer");
        }
    }
    return 0;

}