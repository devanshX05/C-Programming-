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
// void Segregate (struct node* head, int n){
//     struct node *temp;
//     temp=head;
//     while(temp!=NULL){
//         if(temp->value%2!=0){
//             printf("odd nodes are: %d",temp->value);
//         }
//         else{
//            printf("Even nodes are: %d",temp->value); 
//         }
//         temp=temp->ptr;
//     }
// }
struct node* Segregate(struct node *head){

    struct node *evenHead=NULL, *evenTail=NULL;
    struct node *oddHead=NULL, *oddTail=NULL;
    struct node *temp=head;

    while(temp!=NULL){

        if(temp->value % 2 == 0){

            if(evenHead==NULL){
                evenHead=temp;
                evenTail=temp;
            }
            else{
                evenTail->ptr=temp;
                evenTail=temp;
            }

        }
        else{

            if(oddHead==NULL){
                oddHead=temp;
                oddTail=temp;
            }
            else{
                oddTail->ptr=temp;
                oddTail=temp;
            }
        }

        temp=temp->ptr;
    }

    if(evenHead==NULL)
        return oddHead;

    evenTail->ptr=oddHead;

    if(oddTail!=NULL)
        oddTail->ptr=NULL;

    return evenHead;
}
void display(struct node *head){
    while(head!=NULL){
        printf("%d->",head->value);
        head=head->ptr;
    }
    printf("NULL\n");
}
int main(){
    int n,value,k;
    printf("Enter the number of nodes:");
    scanf("%d",&n);
    printf("Enter the value of the nodes\n");
    for(int i=1;i<=n;i++){
        scanf("%d",&value);
        insert_end(&head,value);
    }
    display(head);
    Segregate(head);

    return 0;
}