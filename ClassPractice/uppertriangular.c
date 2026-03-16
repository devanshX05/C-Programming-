#include<stdio.h>
int main(){
    int arr[3][3];
    for(int i=0;i<3;i=i+1){
        for(int j=0;j<3;j=j+1){
            if(i<j){
                printf("0 ");
            }
            else{
                printf("1 ");
            }
        }
        printf("\n");
    }
    return 0;
}