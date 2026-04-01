#include<stdio.h>
#define size 10
int arr[size];
int front=-1,rear=-1;

void enqueue(int item){
    
    if(rear=size-1){
        printf("Stack overflow");
        return;
    }
    if(front==-1 && rear==-1){ //when queue is empty
        front=0;//now we have initialize the front to the first index 
    }//both front and rear are pointing to the first position when first element is inserted
    rear++;
    arr[rear]=item;
    printf("Enqueue done");
}
void dequeue(){
    if(front==-1 && rear==-1){
        printf("Queue Underflow\n");
        return; 
    }
    else{
        printf("Deleted item:%d",arr[front]);//deletion take place from front
        front++;
        if(front>rear){ //this is generally a invalid state 
            front=rear=-1; //so we reset it, as the stack is empty so we set it to -1
        }
    }
}
void display(){
    if(front == -1 && rear == -1){
        printf("Queue is empty\n");
        return;
    }

    printf("Queue elements: ");
    for(int i = front; i <= rear; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main(){
    int choice, item;

    while(1){
        printf("\n1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice){
            case 1:
                printf("Enter item: ");
                scanf("%d", &item);
                enqueue(item);
                break;

            case 2:
                dequeue();
                break;

            case 3:
                display();
                break;

            case 4:
                return 0;

            default:
                printf("Invalid choice\n");
        }
    }
    return 0;
}
