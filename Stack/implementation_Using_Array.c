#include<stdio.h>
#define size 10

    int arr[size];
    int top=-1;
    
    void push(int item){
        if(top==size-1){
            printf("Stack overflow\n");
        }
        top=top+1;
        arr[top]=item;
        printf("Value to be pushed:%d",item);
    }
    void pop(){
        if(top==-1){
            printf("Stack underflow\n");
        }
        printf("Value to be poped:%d",arr[top]);
        top=top-1;
    } 
    void display(){
        if(top==-1){
            printf("Stack is empty");
            return;
        }
        for(int i=top;i>=0;i--){ //i=top because In a stack, top always stores the index of the last inserted element
            printf("%d->",arr[i]);
        }

    }
int main(){
    int choice,item;
    while(1){
        printf("Press 1 for push\nPress 2 for pop\nPress 3 for display\n");
        scanf("%d",&choice);
        switch (choice)
        {
         case 1:
            printf("Enter value: ");
            scanf("%d", &item);
            push(item);
            break;
         case 2:
            pop();
            break;
         case 3:
            display();
            break;
        
         default:
            break;
        }
    }
    return 0;
}

