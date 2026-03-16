#include<stdio.h>
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(int i=2;i<=n-1;i=i+1){
        if(n%i==0){
            printf("number is composite\n");
            break;
            }
            else{
                printf("It is a prime no. ");
                break;
            }
        }
    
    return 0;
}