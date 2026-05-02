#include<stdio.h>
struct node{
    int value;
    struct node *next;
};
struct node *top=NULL;
void push(int item){
    struct node *new;
    new=(struct node *)malloc(sizeof(struct node));
    if(new==NULL){
        printf("no");
    }
    new->value=item;
    if(top==NULL){
        top=new;
        return;
    }
    new->next=top;
    top=new;
}
void pop(){
    struct node *temp;
    if(top==NULL){
        printf("Stack underflow");
        return ;
    }
    temp=top;
    top=temp->next;
    free(temp);
}
void display(){
    struct node *temp;
    temp=top;
    while(temp->next!=NULL){
        printf("%d ",temp->value);
        temp=temp->next;
    }
}
