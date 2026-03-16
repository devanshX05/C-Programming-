// #include<stdio.h>
// int main(){
//     int a,b;
//     printf("Enter 1st number: ");
//     scanf("%d",&a);
//      printf("Enter 2nd number: ");
//     scanf("%d",&b);
//     a=a+b;
//     b=a-b;
//     a=a-b;
//     printf("1st number: %d",a);
//     printf("\n2nd number: %d",b);
//     return 0;

// }

//Using call by reference

#include<stdio.h>
void swap(int *x,int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
    printf("Swap funtion= x:%d  y:%d",*x, *y);
    
}
int main(){
    int x;
    printf("Enter the value: ");
    scanf("%d",&x);
    int y;
    printf("Enter the value: ");
    scanf("%d",&y);
    printf("Value before swapping: x=%d  y=%d\n",x,y);
    swap(&x,&y);

    return 0;
}