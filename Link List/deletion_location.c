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

    temp = *head;
    while (temp->ptr != NULL) {
        temp = temp->ptr;
    }

    temp->ptr = new;
}

/* Delete node at specific position */
void delete_position(struct node **head, int pos) {
    struct node *temp, *prev;
    int i;

    if (*head == NULL) {
        printf("List is empty. Deletion not possible.\n");
        return;
    }

    temp = *head;
    /* If deleting first node */
    if (pos == 1) {
        *head = temp->ptr;
        free(temp);
        return;
    }

    /* Traverse to the node before the position */
    for (i = 1; i < pos - 1; i++) {
        temp = temp->ptr;

        if (temp == NULL || temp->ptr == NULL) {
            printf("Position not valid.\n");
            return;
        }
    }

    prev = temp->ptr;
    temp->ptr = prev->ptr;
    free(prev);
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
    int n, value, pos;

    printf("How many nodes do you want to insert? ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter value for node %d: ", i + 1);
        scanf("%d", &value);
        insert_end(&head, value);
    }

    printf("\nLinked List before deletion:\n");
    display(head);

    printf("\nEnter position to delete: ");
    scanf("%d", &pos);

    delete_position(&head, pos);

    printf("\nLinked List after deletion:\n");
    display(head);

    return 0;
}