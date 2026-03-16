#include<stdio.h>
#include<string.h>
#include <stdbool.h>

int main(){
    struct date{
    int date;
    int month;
    int year;
};
struct date a;
printf("Enter the Date:");
scanf("%d\n",&a.date);
printf("Enter the month:");
scanf("%d\n",&a.month);
printf("Enter the year:");
scanf("%d\n",&a.year);

struct date b;
printf("Enter the Date:");
scanf("%d\n",&b.date);
printf("Enter the month:");
scanf("%d\n",&b.month);
printf("Enter the year:");
scanf("%d\n",&b.year);

bool flag=true;
if(a.date!=b.date) flag=false;
if(a.month!=b.month) flag=false;
if(a.year!=b.year) flag=false;

if(flag==true){
    printf("The dates are same");
}
else{
    printf("The dates are different");
}

return 0;
}

