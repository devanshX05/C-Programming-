#include<stdio.h>
int power (int a, int b){
    int x=1;
    for(int i=1;i<=b;i=i+1){ // b is the power.. hence it is written under for loop telling that
     x=x*a;                  // how many time the code will run 
    }
    return x;
    
}
int main(){
    int a;
    printf("Enter the base: ");
    scanf("%d",&a);
    int b;
    printf("Enter the power: ");
    scanf("%d",&b);
    int ans= power(a,b);
    printf("%d",ans);
    return 0;
}



       
