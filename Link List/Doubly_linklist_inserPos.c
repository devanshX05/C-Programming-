#include <stdio.h>
#include <stdlib.h>

struct node {
    int value;
    struct node *next;
    struct node *pre;
};

struct node *head = NULL;

void insert_at_position(int item, int pos) {
    struct node *newnode, *temp;
    int i;

    newnode = (struct node*)malloc(sizeof(struct node));
    if (newnode == NULL) {
        printf("Memory not allocated\n");
        return;
    }

    newnode->value = item;
    newnode->next = NULL;
    newnode->pre = NULL;

    if (pos == 1) {
        if (head != NULL) {
            newnode->next = head;
            head->pre = newnode;
        }
        head = newnode;
        return;
    }

    temp = head;
    for (i = 1; i < pos - 1 && temp != NULL; i++) {
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Invalid position\n");
        free(newnode);
        return;
    }

    newnode->next = temp->next;
    newnode->pre = temp;

    if (temp->next != NULL) {
        temp->next->pre = newnode;
    }

    temp->next = newnode;
}

void display() {
    struct node *temp = head;

    if (temp == NULL) {
        printf("Linked list is empty\n");
        return;
    }

    while (temp != NULL) {
        printf("%d -> ", temp->value);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    int n, value, pos;

    printf("How many nodes do you want to insert initially: ");
    scanf("%d", &n);

 
    for (int i = 1; i <= n; i++) {
        printf("Enter value for node %d: ", i);
        scanf("%d", &value);
        insert_at_position(value, i);
    }

    printf("\nInitial Linked List:\n");
    display();

    /* Insert at desired position */
    printf("\nEnter position to insert new value: ");
    scanf("%d", &pos);

    printf("Enter value to insert: ");
    scanf("%d", &value);

    insert_at_position(value, pos);

    printf("\nLinked List after insertion:\n");
    display();

    return 0;
}

