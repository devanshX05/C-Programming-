#include<stdio.h>
 #include<stdlib.h>
  struct node{
    int value;
    struct node *ptr; 
    struct noce *pre; 
}*head=NULL;

void position(int pos) {
    struct node *temp, *pr;

    if (head == NULL) {
        printf("List is empty");
        return;
    }

    if (pos <= 0) {
        printf("Invalid position");
        return;
    }

    // Delete first node
    if (pos == 1) {
        temp = head;
        head = head->ptr;

        if (head != NULL) {
            head->pre = NULL;
        }

        free(temp);
        return;
    }

    temp = head;

    // Move temp to node before the position
    for (int i = 1; i < pos - 1; i++) {
        if (temp->ptr == NULL) {
            printf("Not valid");
            return;
        }

        temp = temp->ptr;
    }

    pr = temp->ptr;

    if (pr == NULL) {
        printf("Not valid");
        return;
    }

    temp->ptr = pr->ptr;

    if (pr->ptr != NULL) {
        pr->ptr->pre = temp;
    }

    free(pr);
}