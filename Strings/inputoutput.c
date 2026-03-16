// #include<stdio.h>
// #include<string.h>
// int main(){
//     char str[40];
//     scanf("%s",&str); //it will give you the output of onlly the first word.
//     printf("Your input was: %s",str);
//     return 0;
// }

#include<stdio.h>
#include<string.h>
int main(){
    char str[40];
    printf("Input: ");
     scanf("%[^\n]s",&str); //it will give you the output of full setence.
    // gets(str);
    printf("Your input was: %s",str);
    return 0;
}