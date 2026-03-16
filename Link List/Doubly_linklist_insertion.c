#include<stdio.h>
#include<stdlib.h>
struct node{
    int value;
    struct node *next;
    struct node *pre;
}*head=NULL;

void insert_beginning(int item){
    struct node *new=NULL;
    new=(struct node *)malloc(sizeof(struct node));
    if(new==NULL){
        printf("Memory not allocated\n");
    }
    new->value=item;
    new->next=head;
    new->pre=NULL;
    
    if(head!=NULL){ //we are inserting the new node at the beginning so we have to points the head's previous toward the new node
        head->pre = new;//updating head's previous
    }
    head=new;//now new node is the head
}
void display(struct node *head){
    if(head==NULL){
        printf("Linked list is empty\n");
        return;
    }
  while(head!=NULL){
        printf("%d->",head->value);
        head=head->next;
    }
    printf("NULL\n");
}

int main() {
    int n, value;

    printf("How many nodes do you want to insert: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter value for node %d: ", i + 1);
        scanf("%d", &value);
        insert_beginning(value);
    }

    printf("\nLinked List:\n");
    display(head);

    return 0;
}



