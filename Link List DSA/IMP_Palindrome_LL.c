#include<stdio.h>
#include<stdlib.h>

struct node{
    int value;
    struct node *next;
}*head=NULL;

void insert_beginning(int item){
    struct node *new;
    new=(struct node*)malloc(sizeof(struct node));
    if(new==NULL){
        printf("Memory not allocated");
        return;
    }
    new->value=item;
    new->next=head;
    head=new;
}

void display(struct node *head){
    if(head==NULL){
        printf("list empty\n");
        return;
    }
    while(head!=NULL){
        printf("%d ",head->value);
        head=head->next;
    }
}

struct node* reverse(struct node *current){
    struct node *prev = NULL;
    struct node *current = head;
    struct node *next = NULL;

    while(current!=NULL){
        next = current->next; 
        current->next = prev;  
        prev = current;           
        current = next;           
    }

   return prev;
}

int palindrome(struct node *head) {

    if (head == NULL || head->next == NULL) {
        return 1;
    }

    struct node *slow = head;
    struct node *fast = head;

    /* Find the middle */
    while (fast->next != NULL && fast->next->next != NULL) {

        slow = slow->next;
        fast = fast->next->next;
    }

    /*
       slow is now at the end of
       the first half
    */

    struct node *newHead = reverse(slow->next);

    struct node *first = head;
    struct node *second = newHead;

    /* Compare both halves */
    while (second != NULL) {

        if (first->value != second->value) {

            /* Restore the original list */
            slow->next = reverse(newHead);

            return 0;
        }

        first = first->next;
        second = second->next;
    }

    /* Restore the original list */
    slow->next = reverse(newHead);

    return 1;
}
