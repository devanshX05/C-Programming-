// #include<stdio.h>
// int main(){
//     int arr[5];
//     for(int i=0;i<=4;i=i+1){
//       printf("Enter the mark of the student %d:",i+1);
//       scanf("%d",&arr[i]);
//       if(arr[i]<=35){
//         printf("roll no. of this student is %d\n",i);
//       }
//     }
    
    
//     return 0;
// }

//Address of the element

#include<stdio.h>
int main(){
    int arr[5]={1,5,6,8,2};
    for(int i=0;i<=4;i=i+1){
        printf("%p ",&arr[i]);
    }
    return 0;
}