#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

// Create new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Insert at end
struct Node* insertEnd(struct Node* head, int data) {
    struct Node* newNode = createNode(data);

    if (head == NULL)
        return newNode;

    struct Node* temp = head;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
    return head;
}

// Print list
void printList(struct Node* head) {
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

// Your merge function (recursive)
struct Node* merge(struct Node* l1, struct Node* l2) {
    if (l1 == NULL) return l2;
    if (l2 == NULL) return l1;

    struct Node* result = NULL;

    if (l1->data <= l2->data) {
        result = l1;
        result->next = merge(l1->next, l2);
    } else {
        result = l2;
        result->next = merge(l1, l2->next);
    }

    return result;
}

// Main function
int main() {
    struct Node* list1 = NULL;
    struct Node* list2 = NULL;
    struct Node* mergedList = NULL;
    int n, x;

    // Input first list
    printf("Enter number of elements in List 1: ");
    scanf("%d", &n);
    printf("Enter elements (sorted):\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        list1 = insertEnd(list1, x);
    }

    // Input second list
    printf("Enter number of elements in List 2: ");
    scanf("%d", &n);
    printf("Enter elements (sorted):\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        list2 = insertEnd(list2, x);
    }

    // Display lists
    printf("\nList 1: ");
    printList(list1);

    printf("List 2: ");
    printList(list2);

    // Merge lists
    mergedList = merge(list1, list2);

    // Display merged list
    printf("Merged List: ");
    printList(mergedList);

    return 0;
}