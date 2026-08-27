#include<stdio.h>
#include<stdlib.h>

struct node{
    int value;
    struct node *next;
    struct node *pre;
}*head=NULL;

void insert_end(int item){
    struct node *temp, *new;
    new=(struct node*)malloc(sizeof(struct node));
    if(new==NULL){
        printf("No allocation");
        exit(0);
    }
    new->value=item;
    new->next=NULL;
    new->pre=NULL;

    temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=new;
    new->pre=temp;
}
void duplicate(int n){
    struct node *temp,*i,*j,*k;
    temp=head;
    for(i=temp;i!=NULL;i=i->next){
        j=i->next;
        while(j!=NULL){
            if(j->value==i->value){
               temp=j;
               j=j->next;
               temp->pre->next=temp->next; //equivalent to a[k]=a[k+1]

               if(temp->next != NULL){//This code is used to fix the backward (pre) link after deleting a node in a doubly linked list.
                    temp->next->pre=temp->pre;
                }
                free(temp);
            }
            else{
                j=j->next;
            }
        }
    }
}
void display(struct node *head){
    while(head!=NULL){
        printf("%d->",head->value);
        head=head->next;
    }
    printf("NULL\n");
}
int main(){
    int n,value,k;
    printf("Enter the number of nodes:");
    scanf("%d",&n);
    printf("Enter the value of the nodes\n");
    for(int i=1;i<=n;i++){
        scanf("%d",&value);
        insert_end(value);
    }
    display(head);
    duplicate(n);
    display(head);

    return 0;
}