#include<stdio.h>
int main(){
    int a=5;
    int* x=&a;// pehle he declare kar diye (it is notation of writing the pointers func)

    printf("%p",&x); //%p address ke bare mei batata hai
    
    return 0;
}

// printf("%p",x)== this will give the address of a, becoz x=&a
// printf("%p",&x)== this will give the address of x 
// printf("%d",*x)== this will give 5 (X ke andar is bhi adress ka variable store hai)
// * pointers ko represent krta hai