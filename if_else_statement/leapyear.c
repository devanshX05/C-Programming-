#include <stdio.h>
int main(){
    printf("Enter the year: ");
    int x;
    scanf("%d",&x);
    if(x%4==0){
        printf("It is a Leap year");
    }
    else{
        printf("It is not a leap year ");
    }
    return 0;
}