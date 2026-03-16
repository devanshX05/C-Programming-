#include<stdio.h>
int add(int a, int b){ //we can also use x and y as a decleration
    return a+b; // both a and b, x and y are same
    //we can also derclare int c=a+b; and then we can write return c;
}
int product(int a, int b){
    return a*b;
    
}

int main(){
    int a;
    printf("Enter the number: ");
    scanf("%d",&a);
    int b;
    printf("Enter the number: ");
    scanf("%d",&b);
    int ans=add(a,b);
    printf("%d",ans);
    return 0;
}