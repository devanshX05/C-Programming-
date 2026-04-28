#include<stdio.h>
#define size 10
    int a[size],top=-1;
    void push(int item){
        if(top==size-1){
            printf("Stack Overflow");
            return;
        }
        top=top+1;
        a[top]=item;
        printf("value psuhed:%d",item);
    }
    void pop(){
        if(top==-1){
            printf("Stack UnderFLow");
            return;
        }
        int temp=a[top];
        printf("Value popped:%d",temp);
        top=top-1;
    }
    void display(){
        if(top==NULL){
            printf("Stack empty");
            return;
        }
        for(int i=top;i>0;i++){
            printf("%d->",a[i]);
        }
    }

