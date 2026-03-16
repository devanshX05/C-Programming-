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

/* Display the linked list */
void display(struct node *head) { //function for displaying
   
    while (head!= NULL) { //if head is not null 
        printf("%d -> ", head->value); //head is here like temp (head is traversing)
        head = head->ptr;//keep moving it to the next pointer
    }
    printf("NULL\n");
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
    display(head);

    return 0;
}



