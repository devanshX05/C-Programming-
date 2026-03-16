#include<stdio.h>
int main(){
    int x;
    printf("Enter the number: ");
    scanf("%d",&x);
    if(x%3==0){
        if(x%5==0){
            printf("no. is divisible by 3 and 5");
        }
        else{
            printf("it is not divible by either of them");
        }
    }
    return 0;
}
