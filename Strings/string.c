// #include<stdio.h>
// int main(){
//     char arr[]="devansh";
//     int i=0;
//     while(i<7){
//         printf("%c",arr[i]);
//     i=i+1;

//     }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     char arr[]="devansh\0";// agar \0 na bhi lagaye tabhi tabhi computer read kr lega but we 
//     //still have to write the while statement
//     int i=0;
//     while(arr[i]!='\0'){  //null characxter ka use
//         printf("%c",arr[i]);
//     i=i+1;

//     }
//     return 0;
// }

#include<stdio.h>
int main(){
       char str[]="My name is Devansh";
       str[1]='a';
       int i=0;
       while(str[i]!='\0'){
        printf("%c",str[i]);
        i++;
       }
    return 0;
}

//withouut loop

// #include<stdio.h>
// #include<string.h>
// int main(){
//        char str[]="My name is Devansh";
//        printf("%s",str);
       
//     return 0;
//     }