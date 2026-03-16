#include <stdio.h>
int main(){
    int n;
    printf("Enter the Number: ");
    scanf("%d",&n);
    int a;
    for(int i=1;i<=n;i=i+1){ //o and 1 pattern (L4 PW)
        if(i%2!=0) a=1;
        else a=0;
        for(int j=1;j<=i;j=j+1){ 
           
            if (a==0) a=1;
            else a=0;
             printf("%d ",a);

        }
        printf("\n");
    }
    return 0;
}