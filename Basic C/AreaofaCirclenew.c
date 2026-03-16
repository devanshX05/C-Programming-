#include <stdio.h>
int main(){
    float radius;
    printf("Radius: ");
    scanf("%f",&radius);
    float pi= 3.1415;
    float Area= pi*radius*radius;
    printf("The area of Circle is: %f",Area);
    return 0;

}