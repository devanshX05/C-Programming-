#include<stdio.h>
int main(){
    struct book{
        char name[50];
        int pages;
        int price;
    };
    struct book s;
    printf("\nEnter the name of the book:");
    scanf("%s",s.name);
    printf("No. of pages:");
    scanf("%d",&s.pages);
    printf("Price:");
    scanf("%d",&s.price);
    printf("Namer of the book is:%s, Price:%d, No. of pages:%d",s.name,s.price,s.pages);
    
    return 0;
}