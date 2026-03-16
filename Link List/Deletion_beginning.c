#include <stdio.h>
#include <stdlib.h>

struct node {
    int value;
    struct node *ptr;
};

/* Insert node at the end */
void insert_end(struct node **head, int item) {
    struct node *new, *temp;

    new = malloc(sizeof *new);
    if (new == NULL) {
        printf("Memory not allocated\n");
        exit(0);
    }

    new->value = item;
    new->ptr = NULL;

    if (*head == NULL) {
        *head = new;
        return;
    }
//traversing
    temp = *head;
    while (temp->ptr != NULL) {
        temp = temp->ptr;
    }

    temp->ptr = new;
}

void delete_beginning(struct node **head) { //head is a pointer to a pointer to the first node.
    struct node *temp;

    if (*head == NULL) {
        printf("List is empty. Deletion not possible.\n");
        return;
    }

    temp = *head;        // store first node in the temp.This is necessary so we don’t lose access to it after updating head.
    *head = temp->ptr;   // move head to next node...temp->ptr points to the second node in the list.
    free(temp);          // free old first node
}

/* Display linked list */
void display(struct node *head) {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }

    while (head != NULL) {
        printf("%d -> ", head->value);
        head = head->ptr;
    }
    printf("NULL\n");
}

int main() {
    struct node *head = NULL;
    int n, value;

    printf("How many nodes do you want to insert? ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter value for node %d: ", i + 1);
        scanf("%d", &value);
        insert_end(&head, value);
    }

    printf("\nLinked List before deletion:\n");
    display(head);

    delete_beginning(&head);

    printf("\nLinked List after deleting first node:\n");
    display(head);

    return 0;
}
