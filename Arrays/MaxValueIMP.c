// #include<stdio.h>
// int main(){
//     int arr[7]={1,88,52,44,91,16,50};
//     int max=arr[0];   //sabse chota no. for comparision (first no. se hi compare kr do array ke)
//     for(int i=0;i<=6;i=i+1){  // 0 to 6 becuse we are index of array start form 0 to n-1
//         if(max<arr[i]){
//             max=arr[i];
//         }

//     }
//     printf("%d",max);
//     return 0;
// }

// #include<stdio.h>
// #include<limits.h>
// int main(){
//     int arr[7]={1,88,52,44,91,16,50};
//     int max=INT_MIN;   //sabse chota no. for comparision (first no. se hi compare kr do array ke)
//     for(int i=0;i<=6;i=i+1){  // 0 to 6 becuse we are index of array start form 0 to n-1
//         if(max<arr[i]){
//             max=arr[i];
//         }

//     }
//     printf("%d",max);
//     return 0;
// }


//Second Max
#include<stdio.h>
#include<limits.h>
int main(){
    int arr[5]={1,55,19,20,87};
    int max=INT_MIN;
    int smax=INT_MIN;
    for(int i=0;i<=4;i=i+1){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    for(int i=0;i<=4;i=i+1){
        if(max!=arr[i] && smax<arr[i]){
            smax=arr[i];
        }
    }
    printf("%d",smax);
    return 0;
}