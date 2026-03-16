#include<stdio.h>
void greeting(int n){
    if (n==0) return;
    //base case: when n=0 stop the code
    printf("Good morning\n");
    
    return greeting(n-1);
}
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    greeting(n); //it is telling the programme ki n times greet krna hai
    return 0;
}