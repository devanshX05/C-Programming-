//Strings: it is a character array
//strings are generaslly use for storing full sentence 
//ASCII of A=65 a=97..... ASCII of character '0'=48 and '9'=57
// the null character is \0 which has a value of 0

#include<stdio.h>
int main(){
    char arr[5]={'a','b','c','d','e'};
    for(int i=0;i<5;i++){
        printf("%c ",arr[i]);
    }
    //printf("%c",arr[1]);
    return 0;
}