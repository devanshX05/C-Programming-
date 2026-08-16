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
void pos(struct node **head,int pos1,int pos2){
    struct node *temp;
    int sum=0;
    temp=*head;
    for(int i=1;i<pos1-1 && temp!=NULL; i++){
        temp=temp->ptr;
    }
    int a1=temp->value;

    temp = *head;
    for(int i=1;i<pos2-1 && temp!=NULL; i++){
        temp=temp->ptr;
    }
    int a2=temp->value;
    int ans=a1+a2;
    printf("ans = %d", ans);
}
int main(){
    int n,value,pos1,pos2;
    printf("ENter the number of nodes:");
    scanf("%d",&n);
    
    printf("ENter the value of nodes:");
    for(int i=1;i<=n;i++){
        scanf("%d",&value);
        insert_end(&head,value);
    }
    printf("Enter the pos of no 1:");
    scanf("%d",&pos1);
    printf("Enter the pos of no 2:");
    scanf("%d",&pos2);
    pos(&head,pos1,pos2);

}