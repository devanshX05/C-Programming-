// #include<stdio.h>
// int main(){
//     int a,b,c;
//     printf("Enter the first angle: ");
//     printf("Enter the second angle: ");
//     printf("Enter the third angle: ");
//     scanf("%d %d %d",&a,&b,&c);
//     if(a+b>c && a+c>b && b+c>a){
//         printf("It is a correct triangle");

//     }
//     else{
//         printf("It is not a correct triangle");
//     }
//     return 0;
// }

#include <stdio.h>

int main() {
    float a, b, c;

    printf("Enter three sides of a triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    // Check the triangle inequality theorem
    if (a + b > c && a + c > b && b + c > a) {
        printf("It is a valid triangle.\n");
    } else {
        printf("It is NOT a valid triangle.\n");
    }

    return 0;
}
