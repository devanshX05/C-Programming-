#include<stdio.h>
#include<stdlib.h>
struct node{
    int value;
    struct node *next;
    struct node *pre;
}*head=NULL;

void insert_end(int item){
    struct node *new,*temp;
    new=(struct node*)malloc(sizeof(struct node));
    if(new==NULL){
        printf("not allocated");
        return;
    }
    new->value=item;
    new->next=NULL;
    new->pre=NULL;//aabhi ye just pada hua hai NULL 
    if(head==NULL){
        head=new;
        return;
    }
    temp=head; //traversing to last
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=new;
    new->pre=temp;
   
}
void display(struct node *head){
    if(head==NULL){
        printf("The lsit is empty");
        return;
    }
    if(head!=NULL){
        printf("%d->",head->value);
        head=head->next;
    }
    printf("NULL\n");
}