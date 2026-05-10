#include<stdio.h>
#include<stdlib.h>
struct node{
    int value;
    struct node *ptr;
};
void end(struct node **head,int item){
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
void deletion_pos(struct node **head,int pos){
    struct node *temp,*pre;
    if(*head==NULL){
        printf("Deletion not possible");
        return;
    }
    temp=*head;
    for(int i=1;i<pos-1 && temp!=NULL;i++){
        temp=temp->ptr;
    }
    pre=temp->ptr;
    temp->ptr=pre->ptr;
    free(pre);
}
void display(struct node *head){
    while(head!=NULL){
        printf("%d->",head->value);
        head=head->ptr;
    }
    printf("NULL\n");
}
int main(){
    struct node *head=NULL;
    int n,value,pos;
    printf("Enter the numebr of node:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Node %d:",i+1);
        scanf("%d",&value);
        end(&head,value);
    }
    display(head);
    printf("Enter the positon to delete:");
    scanf("%d",&pos);
    deletion_pos(&head,pos);
    display(head);
    return 0;
}

