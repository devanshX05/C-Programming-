#include<stdio.h>
struct node{
    struct node *ptr;
    int value;
};
struct node *front = NULL, *rear = NULL;

void enqueue(int item){
    struct node *new;
    new=(struct node*)malloc(sizeof(struct node));
    if(new==NULL){
        printf("Memeory not alloacted");
        return;
    }
    new->value=item;
    new->ptr=NULL;

    if(front==rear){
        front=rear=new;
    }
    else{
        rear->ptr=new;
        rear=new;
    }
}
void dequeue(){
    struct node *temp;
    if(front==-1 && rear==-1){
        printf("Queue Empty");
        return;
    }
    temp=front;
    if(front==rear){
        front=rear=-1; 
    }
    else{
        temp->ptr=front;
        free(temp);
    }
}