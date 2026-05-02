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
void delete_end(struct node **head){
    struct node *temp,*pre;
    if(*head==NULL){
        printf("not possible");
        return;
    }
    temp=*head;
    while(temp->ptr!=NULL){
        pre=temp;
        temp=temp->ptr;
    }
    pre->ptr=NULL;
    free(temp);
}
void display(struct node *head){
    while(head!=NULL){
        printf("%d ",head->value);
        head=head->ptr;
    }
    printf("NULL\n");
}
int main(){
    struct node *head=NULL;
    int n,value;
    printf("Number of node:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&value);
        insert_end(&head,value);
    }
    display(head);
    delete_end(&head);
    printf("After deletion:\n");
    display(head);
    return 0;
}