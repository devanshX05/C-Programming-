#include<stdio.h>
#include<stdlib.h>
struct node{
    int value;
    struct node *ptr;
}*head=NULL;    
void insert_end(struct node **head,int item){
    struct node *new,*temp;
    new = (struct node*)malloc(sizeof(struct node));
    if(new==NULL){
        printf("Memory not alloavtyed");
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
void delete_ending(struct node **head){
    struct node *temp,*prev;
    if(*head==NULL){
        printf("List empty,deletion not possible");
        return;
    }
    if((*head)->ptr==NULL){
        free(*head);
        *head=NULL;
        return;
    }
    temp=*head;
    while(temp->ptr!=NULL){
        prev=temp;
        temp=temp->ptr;
    }
    prev->ptr=NULL;
    free(temp);
}
void display(struct node *head){
    if(head==NULL){
        printf("List is empty");
        return;
    }
    while(head!=NULL){
        printf("%d->",head->value);
        head=head->ptr;
    }
    printf("NULL\n");
}
int main(){
    struct node *head=NULL;
    int n,value;
    printf("Number of node to be inserted:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Value of node:");
        scanf("%d",&value);
        insert_end(&head,value);
    }
    printf("\nLinked List before deleting last node:\n");
    display(head);

    delete_ending(&head);

    printf("\nLinked List after deleting last node:\n");
    display(head);
    return 0;
}