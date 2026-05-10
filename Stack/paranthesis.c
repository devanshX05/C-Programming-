#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char exp[100];
int top=-1;
void push(char x){
    top=top+1;
    exp[top]=x;
}
void pop(){
    if(top==-1){
        printf("unbalanced");
        exit(0);
    }
    top=top-1;
}
int main(){
    char a[100]="((A+B)*(D-C))";
    for(int i=0;i<strlen(a);i++){
        if(a[i]=='('){
            push(a[i]);
        }
        else if(a[i]==')'){
            pop();
        }
    }
    if(top==-1){
        printf("balanced");
    }
    else{
        printf("unbalanced");
    }
}
//Time Complexity = O(n)