#include<stdio.h>
#include<stdlib.h>

struct node{
    int value;
    struct node *ptr;
};

int main(){
    struct node *first,*head,*second;
    first=(struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));

    if(first==NULL || second==NULL){
        printf("Memory not allocated");
        exit(0);
    }
    printf("Enter the value of first node: ");
    scanf("%d",&first->value);
    printf("Enter the value of second node: ");
    scanf("%d",&second->value);

    first->ptr=second;
    second->ptr=NULL;

    printf("First node value: %d\n", first->value);
    printf("Second node value: %d\n", second->value);//first->ptr->value);

    return 0;
}