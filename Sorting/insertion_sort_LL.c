#include<stdio.h>
#include<stdlib.h>
struct node{
    int value;
    struct node *ptr;
    struct node *pre;
}*head=NULL;
void end(int item){
    struct node *new,*temp;
    new=(struct node*)malloc(sizeof(struct node));
    if(new==NULL){
        printf("No alloaction");
    }
    new->value=item; 
    new->ptr=NULL;
    new->pre=NULL;
    if(head==NULL){
        head=new;
        return;
    }
    temp=head;
    while(temp->ptr!=NULL){
        temp=temp->ptr;
    }
    temp->ptr=new;
    new->pre=temp;
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
void insertion_sort(struct node *head){

    struct node *i, *j;
    int key;

    if(head == NULL)
        return;

    i = head->ptr; //means i=1 as in normal array

    while(i != NULL){

        key = i->value;
        j = i->pre;

        while(j != NULL && j->value > key){

            j->ptr->value = j->value;
            j = j->pre; // means j-- as in normal case
        }

        if(j == NULL)
            head->value = key; //not necessary condition
        else
            j->ptr->value = key;

        i = i->ptr;
    }
}
int main(){
    int n,value;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d ",&value);
        end(value);
    }
    display(head);
    insertion_sort(head);
    printf("Sorted\n");
    display(head);
    return 0;
}