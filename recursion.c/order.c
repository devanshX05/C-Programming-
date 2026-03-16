#include<stdio.h>
void increasing (int x, int n){
    if(x>n) return;
    printf("%d\n",x);
    return increasing(x+1,n);
    //x+1 signifies that ki maine ek baar likh diya and now let the recursion handle the 
    //remaining n-1 cases
}
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    increasing (1,n); //it is telling the programm to run from 1 to n  numbers 
    return 0; // incresing() it telling ki kaha se kaha tak programm ko run krna hai
    // like starting and ending point
}
// understand it by putting 5 in place of 1