#include<stdio.h>
#include<stdlib.h>
struct node{
    int value;
    struct node *next;
    struct node *pre;
}*head=NULL;
void insert_beginning(int item){
    struct node *new;
    new=(struct node*)malloc(sizeof(struct node));
    if(new==NULL){
        printf("Memory not allocated\n");
    }
    new->value=item;
    new->next=head;
    new->pre=NULL;
    if(head!=NULL){
        head->pre = new;
    }
    head=new;
}
int detect_cycle() {
    struct node *slow = head;
    struct node *fast = head;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast) {
            return 1;
        }
    }
    return 0;
}

int main(){
    int n,value;
    printf("Number of nodes: ");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        printf("Value of node %d: ",i+1);
        scanf("%d",&value);
        insert_beginning(value);
    }
    if(head != NULL && head->next != NULL && head->next->next != NULL){
        head->next->next->next = head;  
    }

    if(detect_cycle())
        printf("\nCycle detected in the linked list\n");
    else
        printf("\nNo cycle in the linked list\n");

    return 0;
}