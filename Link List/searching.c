#include<stdio.h>
#include<stdlib.h>
struct node{
    int value;
    struct node *ptr;
}*head=NULL;
void searching(struct node *head,int key){
    struct node *temp;
    int pos=1;
    temp=head;
    while(temp!=NULL){
        if(temp->value==key){
            printf("%d element found at position %d",key,pos);
        }
        temp=temp->ptr;
        pos++;
    }
}
int main(){
    struct node *first=NULL,*second=NULL,*third=NULL;
    first=(struct node *)malloc(sizeof(struct node));
    second=(struct node *)malloc(sizeof(struct node));
    third=(struct node *)malloc(sizeof(struct node));

    first->value=10;
    first->ptr=second;
    second->value=20;
    second->ptr=third;
    third->value=30;
    third->ptr=NULL;

    int key=10;
    searching(head,key);
    return 0;
}