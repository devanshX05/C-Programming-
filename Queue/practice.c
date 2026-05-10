#include<stdio.h>
#define size 10
int a[size];
int front=-1,rear=-1;
void enqueu(int item){
    if(front==-1 && rear==-1){
        front=0;
    }
    if((rear+1)%size==front){
        printf("Overflow");
    }
    rear=(rear+1)%size;
    a[rear]=item;
    printf("Enqueu done");

}
void dequeue(){
    if(front==-1 && rear==-1){
        printf("Empty");
        return;
    }
    if(front==rear){
        front=rear=-1;
    }
    printf("Dequeue done");
    front=(front+1)%size;

}