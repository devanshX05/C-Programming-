#include<stdio.h>
int main(){
    printf("Press 1 for addition");
    printf("Press 2 for subtraction");
    printf("Press 3 for multiplication");
    printf("Press 4 for division");
    int a;
    scanf("%d",&a);
     int b;
    scanf("%d",&b);
    int choice;
    printf("Enter the choice: ");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        printf("%d",a+b);
        break;
        case 2:
        printf("%d",a-b);
        break;
        case 3:
        printf("%d",a*b);
        break;
        case 4:
        printf("%d",a/b);
        break;
    
    default: 
    printf("Wrong choice entered");
        break;
    }
    return 0;
}