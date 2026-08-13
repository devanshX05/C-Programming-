#include<stdio.h>
#include<stdlib.h>
struct node{
    int value;
    struct node *ptr;
}*head=NULL; 

void insert_end(struct node **head,int item){
    struct node *new,*temp;
    new = (struct node*)malloc(sizeof(struct node));
    if(new==NULL){
        printf("Memory not alloavtyed");
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
void middle(struct node *head,int n){
    struct node *temp;
    temp=head;
    if(n%2==0){
    for(int i=0;i<=n/2;i++){
        temp=temp->ptr;
    }
    printf("Middle element:%d",temp->value);
    printf("Middle element:%d",temp->ptr->value);
    }
    else
        {
        for(int i=0;i<n/2;i++){
            temp=temp->ptr;
        }
        printf("Middle element:%d",temp->value);
    }
    
    
}
int main(){
    int n,value;
    printf("Enter the number of nodes:");
    scanf("%d",&n);
    printf("Enter the value of nodes\n");
    for(int i=1;i<=n;i++){
        scanf("%d",&value);
        insert_end(&head,value);
    }
    
    middle(head,n);
    
}