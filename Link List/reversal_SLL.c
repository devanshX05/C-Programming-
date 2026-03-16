#include<stdio.h>
#include<stdlib.h>

struct node{
    int value;
    struct node *next;
}*head=NULL;

void insert_beginning(int item){
    struct node *new;
    new=(struct node*)malloc(sizeof(struct node));
    if(new==NULL){
        printf("Memory not allocated");
        return;
    }
    new->value=item;
    new->next=head;
    head=new;
}

void display(struct node *head){
    if(head==NULL){
        printf("list empty\n");
        return;
    }
    while(head!=NULL){
        printf("%d ",head->value);
        head=head->next;
    }
}

void reverse(){
    struct node *prev = NULL;
    struct node *current = head;
    struct node *next = NULL;

    while(current!=NULL){
        next = current->next; //storing current->next in a temporary pointer i.e. next   
        current->next = prev; //making the next pointing to the previous 
        prev = current;           
        current = next;           
    }

    head = prev; //now previous node will be the head
}

int main() {
    int n,value;

    printf("How many nodes do you want to insert: ");
    scanf("%d",&n);

    for (int i=0; i<n; i++) {
        printf("Enter value for node %d: ", i + 1);
        scanf("%d",&value);
        insert_beginning(value);
    }

    printf("\nOriginal Linked List:\n");
    display(head);
    reverse();

    printf("\n\nReversed Linked List:\n");
    display(head);

    return 0;
}

