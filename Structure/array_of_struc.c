// #include<stdio.h>
// int main(){
//     typedef struct pokemon
//     {
//         int hp;
//         int attack;
//         int speed;
//         char tier;
//     }pokemon;

//     pokemon arr[3];
//     arr[0].attack=50;
//     arr[0].hp=100;
//     arr[0].speed=30;
//     arr[0].tier='A';

//     arr[1].attack=150;
//     arr[1].hp=100;
//     arr[1].speed=130;
//     arr[1].tier='A';

//     arr[2].attack=50;
//     arr[2].hp=30;
//     arr[2].speed=80;
//     arr[2].tier='A';

//     for(int i=0;i<3;i++){
//         printf("%d\n",arr[i].attack);
//         printf("%d\n",arr[i].hp);
//         printf("%d\n",arr[i].speed);
//         printf("%c\n",arr[i].tier);
//     }
    
//     return 0;
// }

//Without any typedef function

#include <stdio.h>
#include<string.h>

struct pokemon {
    int hp;
    int attack;
    int speed;
    char tier;
    char name[15];
};

int main() {
    struct pokemon arr[3];

    strcpy(arr[0].name,"Charizard");
    arr[0].attack = 50;
    arr[0].hp = 100;
    arr[0].speed = 30;
    arr[0].tier = 'A';

    strcpy(arr[1].name,"Pokemon");
    arr[1].attack = 150;
    arr[1].hp = 100;
    arr[1].speed = 130;
    arr[1].tier = 'A';

    strcpy(arr[2].name,"Mewtow");
    arr[2].attack = 50;
    arr[2].hp = 30;
    arr[2].speed = 80;
    arr[2].tier = 'A';

    for (int i = 0; i < 3; i++) {
        printf("Name:%s\n", arr[i].name);
        printf("Attack:%d\n", arr[i].attack);
        printf("HP:%d\n", arr[i].hp);
        printf("Speed:%d\n", arr[i].speed);
        printf("Tier:%c\n", arr[i].tier);
    }

    return 0;
}
