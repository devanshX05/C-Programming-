#include <stdio.h>
#include <stdlib.h>

struct node {
    int value;
    struct node *ptr;
};

/* Insert at specific position */
void insert_position(struct node **head, int item, int pos) {
    struct node *newnode, *temp;
    int i;

    newnode = malloc(sizeof *newnode);
    if (newnode == NULL) {
        printf("Memory not allocated\n");
        exit(0);
    }

    newnode->value = item;

    /* Insert at beginning */
    if (pos == 1) {
        newnode->ptr = *head;
        *head = newnode;
        return;
    }

    temp = *head; //important line

    /* Traverse to position-1 */
    for (i = 1; i < pos - 1 && temp != NULL; i++) {//moving the temp just before the insertion position. 
        //pos-1 because insertion happens after that node
        temp = temp->ptr;
    }

    if (temp == NULL) { //if traversal reaches NULL 
        printf("Position not valid\n");//the positon is not valid 
        free(newnode);// so we must free it to avoid memory leak.
        return;
    }

    newnode->ptr = temp->ptr;
    temp->ptr = newnode;
}

/* Display linked list */
void display(struct node *head) {
    while (head != NULL) {
        printf("%d -> ", head->value);
        head = head->ptr;
    }
    printf("NULL\n");
}

int main() {
    struct node *head = NULL;
    int n, value, pos;

    printf("How many nodes do you want to insert initially? ");
    scanf("%d", &n);

    /* Initial list creation */
    for (int i = 0; i < n; i++) {
        printf("Enter value: ");
        scanf("%d", &value);
        insert_position(&head, value, i + 1);
    }

    printf("\nLinked List:\n");
    display(head);

    printf("\nEnter value to insert: ");
    scanf("%d", &value);

    printf("Enter position: ");
    scanf("%d", &pos);

    insert_position(&head, value, pos);

    printf("\nUpdated Linked List:\n");
    display(head);

    return 0;
}