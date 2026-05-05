#include <stdio.h>
#include <stdlib.h>

struct node {
    int value;
    struct node *ptr;
};

/* Insert node at beginning */
void insert_beginning(struct node **head, int item) {
    struct node *new;

    new = (struct node*)malloc(sizeof(struct node));//malloc(sizeof *new);
    if (new == NULL) {
        printf("Memory not allocated\n");
        exit(0);
    }
 
    new->value = item;
    new->ptr = *head;//You want to point to the current first node, not to the address of the pointer.
    *head = new;
}

void circular(struct node **head){
    struct node *temp;
    if(*head==NULL){
        return; 
    }
    temp=*head;
    while(temp->ptr!=NULL && temp->ptr!=*head){
        temp=temp->ptr;
    }
    temp->ptr=*head;

}



/* Display the linked list */
void circulardisplay(struct node *head) { 
    struct node *temp;
    if(head==NULL){
        return;
    }
    temp=head;
    do{
        printf("%d ",temp->value);
        temp=temp->ptr;
        
    }while(temp!=head);
}

int main() {
    struct node *head = NULL;//It is telling the program: “The linked list is empty right now.”
    int n, value;

    printf("How many nodes do you want to insert? ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter value for node %d: ", i + 1);
        scanf("%d", &value);
        insert_beginning(&head, value);
    }

    printf("\nLinked List:\n");
    circular(&head);
    circulardisplay(head);

    return 0;
}



