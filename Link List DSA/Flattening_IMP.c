#include<stdio.h>
#include<stdlib.h>
struct node {
    int value;
    struct Node *next;
    struct Node *bottom;
}*head=NULL;

struct node* merge(struct node* a, struct node* b) {
    
    if (a == NULL)
        return b;

    if (b == NULL)
        return a;

    struct node* result;

    if (a->value < b->value) {
        result = a;
        result->bottom = merge(a->bottom, b);
    }
    else {
        result = b;
        result->bottom = merge(a, b->bottom);
    }

    result->next = NULL;

    return result;
}
struct node* flatten(struct node* root) {

    // Base case
    if (root == NULL || root->next == NULL)
        return root;

    // Flatten the remaining list
    root->next = flatten(root->next);

    // Merge current list with flattened remaining list
    root = merge(root, root->next);

    return root;
}
