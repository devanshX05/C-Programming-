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
void display(struct node *head){
    if(head==NULL){
        printf("EMpty");
        return;
    }
    while(head!=NULL){
        printf("%d->",head->value);
        head=head->ptr;
    }
    printf("NULL\n");
}
void bubble(struct node *head){
    struct node *i,*j;
    for(i=head;i!=NULL;i=i->ptr){
        for(j=head;j->ptr!=NULL;j=j->ptr){ //because when j reaches the last node, j->ptr becomes NULL.
            if(j->value > j->ptr->value){
                int temp=j->value;
                j->value=j->ptr->value;
                j->ptr->value=temp;
            }
        }
    }
}
int main(){
    int n,value;
    printf("Enetr the number of elements:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Enetr value %d:",i+1);
        scanf("%d",&value);
        end(&head,value);
    }
    
    display(head);
    bubble(head);
    printf("Sorted\n");
    display(head);
    return 0;
}