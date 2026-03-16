//Without recursion

// #include<stdio.h>
// void sum(int n){
//     int s=0;
//     for(int i=1;i<=n;i=i+1){
//         s=s+i;
        
//     }
//     printf("%d",s);
//     return; 
// }
// int main(){
//     int n;
//     printf("Enter the number: ");
//     scanf("%d",&n);
//     sum(n);
//     return 0;
// }

//With recursion**** (Very Important)

#include<stdio.h>
void sum(int n, int s){  // int s humare sum ko store kr raha hai
    if(n==0){  //if n=0 the function will return 
        printf("%d",s);
        return;
    }
    sum(n-1,n+s);  //understand the way of writing(*Assume n=5)
    return;
}
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
     sum(n,0);
    return 0;
}

