#include <stdio.h>
int main(){
    printf("Arithmatic Progression\n");
    
    printf("Enter a number: ");
    int x;
    scanf("%d",&x);
    for(int i=4;i<=2*x-1;i=i+3){
        printf("%d ",i);
    }
    return 0;
}