#include<stdio.h>
#include<stdlib.h>
struct node{
    int value;
    struct node *ptr;
}*top=NULL;
void push(int item){
    struct node *new;
    new=(struct node*)malloc(sizeof(struct node));
    if(new==NULL){
        printf("Memory not alloacted");
    }
    new->value=item;
    new->ptr=top;
    top=new;
    printf("Value to be pushed:%d",item);
}
void pop(){
    struct node *temp;
    if(top==NULL){
        printf("Underflow");
        return;
    }
    temp=top;
    printf("Value to be poped:%d",temp->value);
    top=temp->ptr;
    free(temp);
}
void display(){
    struct node *temp;
    if(top==NULL){
        printf("Stack is empty");
        return;
    }
     temp = top;

    printf("Stack elements are:\n");
    while(temp != NULL){
        printf("%d -> ", temp->value);
        temp = temp->ptr;
    }
    printf("/n");
}
int main(){
    int choice,item;
    while(1){
        printf("Press 1 for push\nPress 2 for pop\nPress 3 for display\n");
        scanf("%d",&choice);
        switch (choice)
        {
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
        
         default:
            break;
        }
    }
    return 0;
}