//Structure is a user defined datatype
//elements are stored in continous memory location
#include<stdio.h>
int main(){
   struct basics {
    int hp;
    int speed;
    int attack;
    char tier;
};
struct basics pikachu;
pikachu.attack=60; //by using dot operator we can access our attributes
pikachu.hp=60; 
pikachu.speed=100;
pikachu.tier='A';
printf("%d,%d",pikachu.attack,pikachu.speed);

return 0;
}






