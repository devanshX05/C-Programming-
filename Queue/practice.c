#include<stdio.h>
#define size 10
int a[size];
int top1=-1,top2=-1;
void enqueue(int item){
    if(top1==size-1){
        printf("overflow");
        return;
    }
    top1=top1+1;
    a[top1]=item;
    printf("Enqueue done\n");
}
int dequeue(){
    if(top1==-1 &&top2==-1){
        printf("Dequeue not possible");
        return -1;
    }
    if(top2==-1){
        while (top1!=-1)
        {
            int value=a[top1];
            top1=top1-1;
            top2=top2+1;
            a[top2]=value;
             
        }
        
    }
    int ans=a[top2];
    top2=top2-1;
    return ans;
}
int main(){
    enqueue(1);
    enqueue(2);
    enqueue(3);
    printf("Dequeued:%d\n",dequeue());
    printf("Dequeued:%d\n",dequeue());
    enqueue(4);
    printf("Dequeued:%d\n",dequeue());

    return 0;
}