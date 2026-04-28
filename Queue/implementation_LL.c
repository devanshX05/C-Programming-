#include<stdio.h>
#include<stdlib.h>

struct node{
    int value;
    struct node *ptr;
};

struct node *front = NULL, *rear = NULL;

void enqueue(int item){
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));

    temp->value = item;
    temp->ptr = NULL;//it will be the last node, as insertion take place form rear

    if(front == NULL && rear == NULL){ 
        front = rear = temp;          //hence the new node is at the end as well as rear
    }
    else{
        rear->ptr = temp;//Link the current last node to the new node
        rear = temp;//Move rear to the new node
    }
    printf("Value enqueued is %d\n", item);
}

void dequeue(){
    struct node *temp;

    if(front == NULL && rear == NULL){
        printf("Queue is empty\n");
        return;
    }

    temp = front; //dequeue take place from front

    if(front == rear){ //if only on enode exist
        front = rear = NULL; //after removing that single node the queue becomes empty
    }
    else{ //this is the condition when more than one element exist
        front = front->ptr;
    }

    printf("Value dequeued is %d\n", temp->value);
    free(temp);
}

void display(){
    struct node *temp;

    if(front == NULL && rear == NULL){
        printf("Queue is empty\n");
        return;
    }

    temp = front;
    while(temp != NULL){
        printf("%d -> ", temp->value);
        temp = temp->ptr;
    }
    printf("NULL\n");
}

int main(){
    int choice, item;

    while(1){
        printf("\n1. Enqueue\n2. Dequeue\n3. Display\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice){
            case 1:
                printf("Enter value: ");
                scanf("%d", &item);
                enqueue(item);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            default:
                printf("Invalid choice\n");
        }
    }
    return 0;
}