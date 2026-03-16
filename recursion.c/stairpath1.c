//nth stairs.. tell the no. of ways to reach the top
// single and double steps.

#include<stdio.h>
int stair(int n){
    if(n==1) return 1;  //if there are only 1 stairs then there is only onne way to climb it
    if(n==2) return 2;  //if there are only 2 stairs then there is only two way to climb it
int totalWays= stair(n-1) + stair(n-2);  //same as fibonacchi
return totalWays;
}

int main(){
    int n;
    printf("Enter the number of stairs: ");
    scanf("%d",&n);
    int ans=stair(n);
    printf("%d",ans);
    return 0;
}
