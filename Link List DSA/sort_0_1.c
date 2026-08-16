#include <stdio.h>
#include <stdlib.h>

// Define node
struct Node {
    int data;
    struct Node* next;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Insert at end
void insert(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    
    struct Node* temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

// Print list
void printList(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

// Selection Sort on Linked List
void selectionSort(struct Node* head) {
    struct Node *i, *j, *min;

    for (i = head; i != NULL; i = i->next) {
        min = i;

        for (j = i->next; j != NULL; j = j->next) {
            if (j->data < min->data) {
                min = j;
            }
        }

        // Swap data
        if (min != i) {
            int temp = i->data;
            i->data = min->data;
            min->data = temp;
        }
    }
}

// Main function
int main() {
    struct Node* head = NULL;
    int n, x;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        insert(&head, x);
    }

    printf("Original List:\n");
    printList(head);

    selectionSort(head);

    printf("Sorted List:\n");
    printList(head);

    return 0;
}