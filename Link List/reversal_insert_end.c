#include<stdio.h>
#include<stdlib.h>
struct node{
    int value;
    struct node *next;
}*head=NULL;
void insert_end(struct node **head,int item){
    struct node *new,*temp;
    new=(struct node*)malloc(sizeof(struct node));
    if(new==NULL){
        printf("No memory alloacted");
    }
    new->value=item;
    new->next=NULL;

    if(*head==NULL){
        *head=new;
        return;
    }
    temp=*head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=new;
}
void display(struct node *head){
    if(head==NULL){
        printf("List is empty");
        return;
    }
    while(head!=NULL){
        printf("%d->",head->value);
        head=head->next;
    }
    printf("NULL\n");
}
void reverse(struct node **head){
    struct node *current=*head;
    struct node *next=NULL;
    struct node *pre=NULL;
    while(current!=NULL){
        next=current->next;
        current->next=pre;
        pre=current;
        current=next;
    }
    *head=pre;
}
int main(){
    struct node *head=NULL;
    int n,value;
    printf("No of nodes:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Value of node:");
        scanf("%d",&value);
        insert_end(&head,value);
    }
    printf("\nLink list\n");
    display(head);
     reverse(&head);

    printf("\nReversed list\n");
    display(head);
    return 0;
}