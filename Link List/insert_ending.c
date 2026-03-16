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

        /* If list is empty */
        if (*head == NULL) {
            *head = new;
            return;
        }

        /* Traverse to last node */
        temp = *head;
        while (temp->ptr != NULL) {
            temp = temp->ptr;
        }

        temp->ptr = new;
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
        int n, value;

        printf("How many nodes do you want to insert? ");
        scanf("%d", &n);

        for (int i = 0; i < n; i++) {
            printf("Enter value for node %d: ", i + 1);
            scanf("%d", &value);
            insert_end(&head, value);
        }

        printf("\nLinked List:\n");
        display(head);

        return 0;
    }
