#include<stdio.h>
#define size 10
int arr[size];
int front=-1,rear=-1;
void enqueue(int item){
    if((rear+1)%size==front){
        printf("Queue is full\n");
        return;
    }
    if(front==-1){
        front=0;
    }
    rear=(rear+1)%size;
    arr[rear]=item;
    printf("Value enqueued: %d\n",item);
}
void dequeue(){
    if(front==-1 && rear==-1){
        printf("Queue is empty\n");
        return;
    }
    else{
        int temp=arr[front];
        if(front==rear){
            front=rear=-1;
        }
        else{
            front=(front+1)%size; //traversing the front
        }
        printf("%d is dequeued\n",temp);
    }
}
void display(){
    if(front==-1 && rear==-1){
        printf("Queue is empty\n");
        return;
    }
    else{
        int i=front;
        while(i!=rear){
            printf("%d ",arr[i]);
            i=(i+1)%size; //tarversing
        }
        printf("%d\n",arr[rear]);
    }
    
}
int main(){
    int choice,item;
    while(1){
        printf("\n1.Enqueue\n2.Dequeue\n3.Display\n");
        printf("Enter the choice:");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            printf("Enter the value:");
            scanf("%d",&item);
            enqueue(item);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            printf("QUEUE\n");
            display();
            break;
        default:
            printf("Invalid choice entered");
            break;
        }
    }
}