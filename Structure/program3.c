//Array of structure

#include<stdio.h>
#include<string.h>

struct cricketer
{
    char name[20];
    int age;
    int matches;
    float avg;
};
int main(){
    struct cricketer arr[3];

    strcpy(arr[0].name,"Dhoni");
    arr[0].age=50;
    arr[0].matches=100;

    strcpy(arr[1].name,"Kohli");
    arr[1].age=38;
    arr[1].matches=30;

    strcpy(arr[2].name,"Rohit");
    arr[2].age=42;
    arr[2].matches=50;

    int sum=0;
    for(int i=0;i<3;i++){
        sum=sum+arr[i].matches;
    }
    printf("%d\n",sum);

    for(int i=0;i<3;i++){
        printf("Name:%s\n",arr[i].name);
        printf("Age:%d\n",arr[i].age);
        printf("Matches:%d\n",arr[i].matches);
    }
    int avg=sum/3;
    printf("Average of there matches is:%d",avg);

    return 0;
}
