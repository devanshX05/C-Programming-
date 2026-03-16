#include<stdio.h>

void even(int n){
    for(int i=1;i<=n;i=i+1){
        if(i%2==0){
            printf("%d ",i);
        }
        //agar hum loop wagera funtion mei hi likh rahe hai to use void not int 
        //because we donot have to return anything
    }
    
}
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    even(n);
    
    return 0;
}