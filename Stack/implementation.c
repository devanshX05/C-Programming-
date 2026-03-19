#include<stdio.h>
#include<stdlib.h>

struct node{
    int value;
    struct node *ptr;
};

struct node *top = NULL;

void push(int item){
    struct node *newnode;

    newnode = (struct node*)malloc(sizeof(struct node));

    if(newnode == NULL){
        printf("Memory not allocated\n");
        return;
    }

    newnode->value = item;
    newnode->ptr = top;//creating a new value and linking it to its pre top and then updating it to top
    top = newnode;

    printf("Item pushed: %d\n", item);
}

void pop(){
    struct node *temp;

    if(top == NULL){
        printf("Stack Underflow\n");
        return;
    }

    temp = top;
    printf("Popped item: %d\n", temp->value);
    top = temp->ptr;
    free(temp);
}

void display(){
    struct node *temp;

    if(top == NULL){
        printf("Stack is empty\n");
        return;
    }

    temp = top;

    printf("Stack elements are:\n");
    while(temp != NULL){
        printf("%d -> ", temp->value);
        temp = temp->ptr;
    }
    printf("NULL\n");
}

int main(){
    int choice, item;

    while(1){
        printf("\n----- STACK MENU -----\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice){

            case 1:
                printf("Enter value to push: ");
                scanf("%d", &item);
                push(item);
                break;

            case 2:
                pop();
                break;

            case 3:
                display();
                break;

            case 4:
                exit(0);

            default:
                printf("Invalid choice\n");
        }
    }

    return 0;
}