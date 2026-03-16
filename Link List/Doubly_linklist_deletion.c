#include <stdio.h>
#include <stdlib.h>

struct node {
    int value;
    struct node *next;
    struct node *pre;
};

struct node *head = NULL;

void insert_ending(int item) {
    struct node *newnode, *temp;

    newnode = (struct node*)malloc(sizeof(struct node));
    if (newnode == NULL) {
        printf("Memory not allocated\n");
        return;
    }

    newnode->value = item;
    newnode->next = NULL;
    newnode->pre = NULL;

    if (head == NULL) {
        head = newnode;
        return;
    }

    temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newnode;
    newnode->pre = temp;
}

void delete_beginning() {
    struct node *temp;

    if (head == NULL) {
        printf("List is empty. Deletion not possible.\n");
        return;
    }

    temp = head;
    head = head->next;

    if (head != NULL) {
        head->pre = NULL;//deletion from beginning mei head node ke phele wle ko null declare krenge
    }

    free(temp);
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
    int n, value;

    printf("How many nodes do you want to insert? ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter value for node %d: ", i + 1);
        scanf("%d", &value);
        insert_ending(value);
    }

    printf("\nLinked List before deleting first node:\n");
    display();

    delete_beginning();

    printf("\nLinked List after deleting first node:\n");
    display();

    return 0;
}
