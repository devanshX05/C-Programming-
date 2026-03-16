#include<stdio.h>
int main(){
    printf("Selling price: ");
    int x;
    scanf("%d",&x);
    int y;
    printf("Cost price: ");
    scanf("%d",&y);
    if(x>y){
        printf("There is a Profit of: ");
        int z=x-y;
        printf("%d",z);
    }
    else{
        printf("There is a Loss of: ");
        int e=y-x;
        printf("%d",e);
    }
    return 0;
}