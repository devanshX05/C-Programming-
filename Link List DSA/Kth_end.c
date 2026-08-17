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
void kth(struct node *head,int n,int k){
    struct node *temp;
    temp=head;
    for(int i=1;i<n-k+1;i++){
        temp=temp->ptr;
    }
    int ans=temp->value;
    printf("%d",ans);
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
    printf("Enter the position of the node:");
    scanf("%d",&k);
    display(head);
    kth(head,n,k);

    return 0;
}