#include<stdio.h>
#include<stdlib.h>
struct node{
    int value;
    struct node *next;
    struct node *pre;  
}*head=NULL ;
void insert_end(int item){
    struct node *new,*temp;
    new=(struct node*)malloc(sizeof(struct node));
    if(new==NULL){
        printf("no");
    }
    new->value=item;
    new->next=NULL;
    if(head==NULL){
        head=new;
    }
    temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=new;
    new->pre=temp;
    
}