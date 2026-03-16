#include<stdio.h>
int main(){
    char str[100];
    int i,j,flag=0;
    printf("Enter the value of string: ");
    scanf("%s",str);
    
    while(str[i]!='\0'){
        i++;
    }
    j=i-1;//last index of string

    for(i = 0; i < j; i++, j--)
    {
        if(str[i] != str[j])
        {
            flag = 1;
            break;
        }
    }

    if(flag == 0)
        printf("The string is Palindrome\n");
    else
        printf("The string is Not Palindrome\n");

    return 0;
}

