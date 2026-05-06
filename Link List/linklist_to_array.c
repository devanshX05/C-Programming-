#include <stdio.h>
#include <stdlib.h>

struct node {
    int value;
    struct node *ptr;
};

/* Insert node at the end */
void insert_end(struct node **head, int item) {
    struct node *new_node, *temp;

    new_node = (struct node*)malloc(sizeof(struct node));
    if (new_node == NULL) {
        printf("Memory not allocated\n");
        exit(0);
    }

    new_node->value = item;
    new_node->ptr = NULL;

    if (*head == NULL) {
        *head = new_node;
        return;
    }

    temp = *head;
    while (temp->ptr != NULL) {
        temp = temp->ptr;
    }

    temp->ptr = new_node;
}

/* Display linked list */
void display(struct node *head) {
    while (head != NULL) {
        printf("%d -> ", head->value);
        head = head->ptr;
    }
    printf("NULL\n");
}

/* Convert linked list to array */
int* list_to_array(struct node *head, int *size) {
    struct node *temp = head;
    int count = 0;

    // Count nodes
    while (temp != NULL) {
        count++;
        temp = temp->ptr;
    }

    *size = count;

    // Allocate array
    int *arr = (int*)malloc(count * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        exit(0);
    }

    // Copy values into array
    temp = head;
    for (int i = 0; i < count; i++) {
        arr[i] = temp->value;
        temp = temp->ptr;
    }

    return arr;
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

    // Convert to array
    int size;
    int *array = list_to_array(head, &size);

    printf("\nArray:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    // Free array memory
    free(array);

    return 0;
}