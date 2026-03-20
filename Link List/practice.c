#include<stdio.h>
#include<stdlib.h>
struct node{
    int value;
    struct node *ptr;
    struct node *pre;
}*head=NULL;
void insert_end(int item){
    struct node *new,*temp;
    new=(struct node *)malloc(sizeof(struct node));
    if(new==NULL){
        printf("No memory");
    }
    new->value=item;
    new->ptr=NULL;
    new->pre=NULL;

    if(head==NULL){
        head=new;
        return;
    }
    temp=head;
    while(temp->ptr!=NULL){
        temp=temp->ptr;
    }
    temp->ptr=new;
    new->pre=temp;
}
