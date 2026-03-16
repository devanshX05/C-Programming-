#include<stdio.h>
#include<string.h>
int main(){
    char str[40];
    printf("input: ");
    scanf("%[^\n]s",&str);
    
   
    int size=0;
    int i=0;
    while(str[i]!='\0'){
        size=size+1;
        i=i+1;
    }
     printf("The size is: ");
    printf("%d",size);
    
    return 0;

}