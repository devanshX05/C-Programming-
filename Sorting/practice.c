#include<stdio.h>
#include<stdlib.h>
struct node{
    int value;
    struct node *ptr;
}*head=NULL;
void end(struct node **head,int item){
    struct node *new,*temp;
    new=(struct node*)malloc(sizeof(struct node));
    if(new==NULL){
        printf("No alloaction");
    }
    new->value=item;
    new->ptr=NULL;
    if(head==NULL){
        head=new;
        return;
    }
    int temp=*head;
    while(temp->ptr!=NULL){
        temp=temp->ptr;
    }
    temp->ptr=new;
}
void display(struct node *head){
    if(head==NULL){
        printf("EMpty");
        return;
    }
    while(head!=NULL){
        printf("%d->",head->value);
        head=head->ptr;
    }
}
void selection_sort(struct node *head){
    struct node *i,*j,*min;
    for(i=head;i!=NULL;i=i->ptr){
        min=i;
        for(j=i->ptr;j!=NULL;j=j->ptr){
            if(min->value > j->value){
                min=j;
            }
        }
        if(min!=i){
            int temp=i->value;
            i->value=min->value;
            min->value=temp;
        }
    }
}