#include <stdio.h>
int main(){
    printf("Volume Of a Sphere \n");
    int r;
    printf("radius: ");
    scanf("%d",&r);
    float v=4*3.14/3;
    float z=v*r*r*r;
    printf("The Volume is: %f",z);
    return 0;
} 