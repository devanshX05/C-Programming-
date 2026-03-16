#include<stdio.h>
int main(){
    printf("Enter the number: ");
     int x;
     scanf("%d",&x);
     for(int i=2;i<=x-1;i=i+1){
        if(x%i==0){
            printf("it is a composite no. \n");
            break;
        }
        else{
            printf("it is a prime no. \n");
            break;
        }
     }

    return 0;

}