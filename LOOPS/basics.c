#include<stdio.h>
int main (){
    printf("Table of 20\n");
    for(int i=1;i<=200;i=i+1){
        if(i%20==0){
            printf("%d\n",i);
        }
    }
   
    return 0;
}