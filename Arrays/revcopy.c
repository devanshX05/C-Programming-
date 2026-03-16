#include<stdio.h>
int main(){
    int arr[7];
    for(int i=0;i<=6;i=i+1){
        printf("Enter %dst no. ",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<=6;i=i+1){
        printf("%d ",arr[i]);
    }
    printf("\n");

    int brr[7];
    for(int i=0;i<=6;i=i+1){
        brr[i]=arr[6-i];
    }
    for(int i=0;i<=6;i=i+1){
        printf("%d ",brr[i]);
    }
    return 0;
}

// #include<stdio.h>
// int main(){
//     int arr[5]={1,2,3,4,5};
//     for(int i=4;i>=0;i=i-1){
//         printf("%d ",arr[i]);
//     }
//     return 0;
// }