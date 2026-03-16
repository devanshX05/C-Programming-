#include<stdio.h>
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    int i=2;
    while (i<=(n-1))
    {
        if(n%i==0){
            printf("It is a composite no. ");
            
        }
        else{
            printf("It is a prime no. ");
            break;
        }
        i=i+1;
    }
    
    return 0;
}