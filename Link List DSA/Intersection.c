#include<stdio.h>
#include<stdlib.h>
struct node{
    int value;
    struct node *ptr;
}*head=NULL;

void insert_end(struct node **head,int item){
    struct node *new,*temp;
    new=(struct node*)malloc(sizeof(struct node));
    if(new==NULL){
        printf("No allocation");
        exit(0);
    }
    new->value=item;
    new->ptr=NULL;
    if(*head==NULL){
        *head=new;
        return;
    }
    temp=*head;
    while(temp->ptr!=NULL){
        temp=temp->ptr;
    }
    temp->ptr=new;
}
void intersection(struct node *head1, struct node *head2){
    struct node *temp1,*temp2;
    temp1=head1;
    while(temp1!=NULL){
        temp2=head2;
        while (temp2!=NULL)
        {
            if(temp1->value==temp2->value){
                printf("%d",temp1->value);
            }
            temp2 = temp2->ptr;
        }
        temp1 = temp1->ptr;
        
    }
}
void display(struct node *head){
    while(head != NULL){
        printf("%d ", head->value);
        head = head->ptr;
    }
    printf("\n");
}
int main(){
    int n1,n2,value;
    struct node *head1 = NULL;
    struct node *head2 = NULL;
    printf("Enter the no of nodes:");
    scanf("%d",&n1);
    printf("Enter the value of nodes");
    for(int i=1;i<=n1;i++){
        scanf("%d",&value);
        insert_end(&head1,value);
    }
    printf("Enter the no of nodes:");
    scanf("%d",&n2);
    printf("Enter the value of nodes");
    for(int i=1;i<=n2;i++){
        scanf("%d",&value);
        insert_end(&head2,value);
    }
    printf("List 1: ");
    display(head1);

    printf("List 2: ");
    display(head2);
    printf("Intersection: ");
    intersection(head1, head2);

    return 0;
}