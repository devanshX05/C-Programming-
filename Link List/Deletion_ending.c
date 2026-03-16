#include <stdio.h>
#include <stdlib.h>

struct node {
    int value;
    struct node *ptr;
};

/* Insert node at beginning */
void insert_beginning(struct node **head, int item) {
    struct node *new = malloc(sizeof *new);

    if (new == NULL) {
        printf("Memory not allocated\n");
        exit(0);
    }

    new->value = item;
    new->ptr = *head;
    *head = new;
}

/* Delete node from end */
void delete_end(struct node **head) {
    struct node *temp, *prev;

    /* Case 1: List is empty */
    if (*head == NULL) {
        printf("List is empty. Deletion not possible.\n");
        return;
    }

    /* Case 2: Only one node */
    if ((*head)->ptr == NULL) {
        free(*head);
        *head = NULL;
        return;
    }
    temp = *head;

    while (temp->ptr != NULL) {
        prev = temp;
        temp = temp->ptr;
    }

    prev->ptr = NULL;
    free(temp);

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
        insert_beginning(&head, value);
    }

    printf("\nLinked List before deleting last node:\n");
    display(head);

    delete_end(&head);

    printf("\nLinked List after deleting last node:\n");
    display(head);

    return 0;
}
