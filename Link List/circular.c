#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head = NULL;

// Function to create circular linked list
void create(int n) {
    struct node *newnode, *temp;
    int i, value;

    for(i = 1; i <= n; i++) {
        newnode = (struct node*)malloc(sizeof(struct node));

        printf("Enter data %d: ", i);
        scanf("%d", &value);

        newnode->data = value;
        newnode->next = NULL;

        if(head == NULL) {
            head = newnode;
            temp = newnode;
        } else {
            temp->next = newnode;
            temp = newnode;
        }
    }

    // make circular
    temp->next = head;
}

// Function to display list
void display() {
    struct node *temp;

    if(head == NULL) {
        printf("List is empty\n");
        return;
    }

    temp = head;
    do {
        printf("%d -> ", temp->data);
        temp = temp->next;
    } while(temp != head);

    printf("(back to head)\n");
}

int main() {
    int n;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    create(n);

    printf("Circular Linked List: ");
    display();

    return 0;
}