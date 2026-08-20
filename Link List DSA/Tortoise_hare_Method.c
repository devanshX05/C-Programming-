#include<stdio.h>
#include<stdlib.h>

struct node{
    int value;
    struct node *ptr;
} *head = NULL;

// Insert node at the end
void insert_end(struct node **head, int item){

    struct node *new, *temp;

    new = (struct node*)malloc(sizeof(struct node));

    if(new == NULL){
        printf("Memory not allocated");
        exit(0);
    }

    new->value = item;
    new->ptr = NULL;

    // If list is empty
    if(*head == NULL){
        *head = new;
        return;
    }

    temp = *head;

    while(temp->ptr != NULL){
        temp = temp->ptr;
    }

    temp->ptr = new;
}

// Display linked list
void display(struct node *head){

    while(head != NULL){
        printf("%d -> ", head->value);
        head = head->ptr;
    }

    printf("NULL\n");
}

// Find middle using Tortoise and Hare method
void middle(struct node *head){

    struct node *slow, *fast;

    slow = head;
    fast = head;

    while(fast != NULL && fast->ptr != NULL){

        slow = slow->ptr;          // Moves 1 step
        fast = fast->ptr->ptr;     // Moves 2 steps
    }

    printf("Middle node = %d\n", slow->value);
}

int main(){

    int n, value;

    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    printf("Enter the values of nodes:\n");

    for(int i = 1; i <= n; i++){
        scanf("%d", &value);
        insert_end(&head, value);
    }

    printf("\nLinked List: ");
    display(head);

    middle(head);

    return 0;
}