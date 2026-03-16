// #include<stdio.h>
// int main(){
//     int i=0;
//     int a=1;
//     while(i<=25){
        
        
//         int b=a+64;
//         char(ch)=(char)b;
//         printf("%c=%d\n",ch,b);
//         i=i+1;
//         a=a+1;
//     }
    
    

//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int a,b;
//     char c,d;
//     printf("ENter the lower character: ");
//     scanf("%c",&c);
//     a=(int)c;
//     b=a-32;
//     d=(char)b;
//     printf("the upper charcter is: %c",b);
//     return 0;
// }

#include<stdio.h>
int main(){
    
    int a,b;
    char c,d;
    printf("Enter the charter: ");
    scanf("%c",&c);
    a=(int)c;
        
        if(a==65 || a==69 || a==73 || a==79 || a==85){
            printf("It is a vowel");
        }
        else{
            printf("It is a consonant");
        }
    

    return 0;
}