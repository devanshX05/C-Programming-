// #include<stdio.h>
// int main(){
//     int arr[8]={1,2,3,4,5,6,7,8};
//     int SumEven=0;
//     int SumOdd=0;
//     for(int i=0;i<=7;i=i+1){
//         if(arr[i]%2==0){
//            SumEven=arr[i]+SumEven;

//         }
//         else{
//             SumOdd=arr[i]+SumOdd;
//         }

        
//     }
//     printf("%d",SumEven-SumOdd);
    
    
//     return 0;
// }

#include<stdio.h>
int main(){
    int arr[8]={5,6,3,2,7,1,11,8};
    for(int i=0;i<=7;i=i+1){
        if(arr[i]%2!=0){
            arr[i]=arr[i]*2;
        }
        else{
            arr[i]=arr[i]+10;
        }
    }
    for(int i=0;i<=7;i=i+1){
        printf("%d ",arr[i]);
    }
    return 0;
}