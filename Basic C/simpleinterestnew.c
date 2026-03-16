#include <stdio.h>
int main(){
    printf("SIMPLE INTEREST\n");
    float p,r,t;
    printf("Enter p: ");
    scanf("%f",&p);
    printf("\nEnter r: "),
    scanf("%f",&r);
    printf("\nEnter t: ");
    scanf("%f",&t);
    float z=(p*r*t)/100;
    printf("SI: %f",z);
    return 0;
}