#include<stdio.h>
int main(){
    struct info{
        int age;
        int salary;
        char name[50];
    };
    struct info p1;
    printf("Enter the name:");
    scanf("%s",p1.name);
    printf("Age:");
    scanf("%d",&p1.age);
    printf("Salary:");
    scanf("%d",&p1.salary);

    struct info p2;
    printf("Enter the name:");
    scanf("%s",p2.name);
    printf("Age:");
    scanf("%d",&p2.age);
    printf("Salary:");
    scanf("%d",&p2.salary);

    printf("Name of person 1 is:%s and the age of person 2 is:%d",p1.name,p2.age);

    return 0;
}