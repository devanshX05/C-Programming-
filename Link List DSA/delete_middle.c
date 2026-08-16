#include<stdio.h>
#include<stdlib.h>
struct node{
    int value;
    struct node *ptr;
}*head=NULL;

void insert_end(struct node **head,int item){
    struct node *new,*temp;
    new=(struct node*)malloc(sizeof(struct node));
    if(new==NULL){
        printf("No allocation");
        exit(0);
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
void delete_middle(struct node **head,int n){
    struct node *temp,*pre;
    temp=*head;
    for(int i=1;i<n/2;i++){
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
    int n,value;
    printf("Enter the no of nodes:");
    scanf("%d",&n);
    printf("Enter the value of nodes");
    for(int i=1;i<=n;i++){
        scanf("%d",&value);
        insert_end(&head,value);
    }
    display(head);
    delete_middle(&head,n);
    display(head);
    return 0;
}