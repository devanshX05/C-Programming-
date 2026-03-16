// #include<stdio.h>
// #include<string.h>

// struct pokemon{
//     int hp;
//     int attack;
//     int speed;
//     char tier;
//     char name[50];
// };
// int main(){
//     struct pokemon p;
//     p.hp=60;
//     p.attack=70;
//     p.speed=100;
//     p.tier='A';
//     strcpy(p.name,"Pikachu");
  
//     struct pokemon*x=&p;
//     printf("%p\n",&p.hp);
//     printf("%p\n",&p.attack);
//     printf("%p\n",&p.speed);
//     printf("%p\n",&p.tier);
//     printf("%p\n",p.name);

//     printf("%p",x);
// }

#include<stdio.h>
#include<string.h>
struct person{
    int age;
    float weight;
};
int main(){
    struct person p1;

    // int q=4;
    // int* p=&q;--> p ke andar q ka address store hai,uspe point kro and uske andar jo value hai print kro
    // *p=7; //q=7 output
    
    struct person* x=&p1; //x stores the address of p1 i.e. it include age and weight
    (*x).age=23; //Access the age member of that structure
    printf("%d\n",p1.age);
    (*x).weight=63.5;
    printf("%f",p1.weight);
    return 0;
}