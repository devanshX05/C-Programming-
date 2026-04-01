#include<stdio.h>

#define size 10

int arr[size];
int front = -1, rear = -1;

void enqueue(int item){
    if((rear + 1) % size == front){ //it depends upon the position of rear
        printf("Queue is full\n");
    }
    else{
        if(front == -1){
            front = 0; //front agar -1 hai to usko 0 index pe lete aao
        }
        rear = (rear + 1) % size; //it is traversing the rear beacuse insertion take from rear
        arr[rear] = item;
        printf("Value inserted: %d\n", item);

// This is the circular movement
// Normally: rear++
// But here we use % size to wrap around
    }
}

void dequeue(){
    int temp;

    if(front == -1 && rear == -1){
        printf("Underflow\n");
    }
    else{
        temp = arr[front];

        if(front == rear){ //Only ONE element in queue
            front = rear = -1;//it is the scene after deleting that only one element
        }
        else{
            front = (front + 1) % size; //it is the case when we are moving the front to the next (circularly)
        }

        printf("%d is deleted\n", temp);
    }
}

void display(){
    if(front == -1 && rear == -1){
        printf("Queue is empty\n");
    }
    else{
        int i = front;
        while(i != rear){
            printf("%d ", arr[i]);
            i = (i + 1) % size; //simply traversing
        }
        printf("%d", arr[rear]); // print last element
        printf("\n");
    }
}

int main(){
    int choice, item;

    while(1){
        printf("\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n");
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

            case 4:
                return 0;

            default:
                printf("Invalid choice\n");
        }
    }
}