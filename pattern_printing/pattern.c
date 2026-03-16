#include <stdio.h>
int main(){
    int n;
    printf("Enter the number ");
    scanf("%d",&n);
    for (int i=1;i<=3;i=i+1){ //outer  loop signifies the no. of lines (rows)
        for (int i=1;i<=n;i=i+1) //innner loop signifies the no. of stars in each lines (column)
        printf("*");
        printf("\n");

    }
    
    return 0;
}