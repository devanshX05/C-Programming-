#include<stdio.h>
#include<stdlib.h>
struct node {
    int value;
    struct node *ptr;
};
void end(struct node **head,int item){
    struct node *new,*temp;
    new=(struct node*)malloc(sizeof(struct node));
    if(new==NULL){
        printf("no memory");
    }
    new->value=item;
    new->ptr=NULL;
    if(*head==NULL){
        *head=new;
        return;
    }
    temp=*head;
    while(temp->ptr!=NULL){
        temp=temp->ptr;
    }
    temp->ptr=new;
}
void delete(struct node **head){
    struct node *temp,*pre;
    if(*head==NULL){
        printf("Dketeion  ot possi0");
        return;
    }
    if((*head)->ptr==NULL){
        free(*head);
        *head=NULL;
    }
    temp=*head;
    while(temp->ptr!=NULL){
        pre=temp;
        temp=temp->ptr;
    }
    pre->ptr=NULL;
    free(temp);

}