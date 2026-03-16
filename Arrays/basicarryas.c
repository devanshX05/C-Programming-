// #include<stdio.h>
// int main(){
//     int arr[5]={2, 4, 6, 8, 1}; //seperate bhi initialize kr skte hai
//     arr[4]=100; //now our array is changed, 4th posi(i.e. 5th val) pe ab 100 aayega 2 4 6 8 100
//     printf("%d",arr[0]); //arr[4]: ye 4th posi ki value print kr dega
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int arr[5]={'a','b','c','d','e'};
//     printf("%c",arr[3]);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int arr[4];
//     printf("Enter the first value: ");
//     scanf("%d",&arr[0]);
//     printf("Enter the second value: ");
//     scanf("%d",&arr[1]);
//     printf("Enter the third value: ");
//     scanf("%d",&arr[2]);
//     printf("Enter the forth value: ");
//     scanf("%d",&arr[3]);
//     printf("%d",arr[2]);
//     return 0;
// }

// Printing all the values at once

// #include<stdio.h>
// int main(){
//     int arr[5]= {2,4,6,8,10};
//     for(int i=0;i<=4;i=i+1){
//         printf("%d ",arr[i]);// use scanf to allow user input and (&arr[i])
//     }
//     return 0;
// }



// #include<stdio.h>
// int main(){
//     int arr[5];
//     printf("Enter the first no: ");
//     scanf("%d",&arr[0]); 
//     printf("Enter the secomnd no: ");
//     scanf("%d",&arr[1]);
//     printf("Enter the third no: ");
//     scanf("%d",&arr[2]);
//     printf("Enter the forth no: ");
//     scanf("%d",&arr[3]);
//     printf("Enter the fifth no: ");
//     scanf("%d",&arr[4]);
//     for(int i=0;i<=4;i=i+1){
//         printf("%d ",arr[i]);// use scanf to allow user input and (&arr[i])
//     }
//     printf("\n%d",arr[2]);
//     return 0;
// }

#include<stdio.h>
int main(){
    int arr[5];
    for(int i=0;i<=4;i=i+1){
        printf("ENter %dst number: ",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=4;i>=0;i=i-1){
       printf("%d ",arr[i]);
    }
    return 0;
}