// #include<stdio.h>
// #include<limits.h>
// int main(){
//     int arr[5]={88,5,66,32,8};
//     int max=INT_MIN;
//     int smax=INT_MIN;
//     for(int i=0;i<=4;i=i+1){
//         if(max<arr[i]){
//             max=arr[i];
//         }
//     }
//     for(int i=0;i<=4;i=i+1){
//         if(max!=arr[i] && smax<arr[i] ){
//             smax=arr[i];
//         }
//     }
//     printf("%d",smax);


//     return 0;
// }


// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enetr the number: ");
//     scanf("%d",&n);
//     int str=n;
//     int spc=1;
//     int a=1;
//     for(int i=1;i<=2*n+1;i=i+1){
//         printf("%d",a);
        
//         a=a+1;
//     }
    
//     printf("\n");
//     for(int i=1;i<=n;i=i+1){
//         int a=1;
//         for(int j=1;j<=str;j=j+1){
//             printf("%d",a);
//             a=a+1;
//         }
//         for(int k=1;k<=spc;k=k+1){
//             printf(" ");
//         }
//          for(int j=1;j<=str;j=j+1){
//             printf("%d",a);
//             a=a+1;
//         }
       
//         str=str-1;
//         spc=spc+2;
//         printf("\n");

//     }
     
    

//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enetr the number: ");
//     scanf("%d",&n);
//     int str=n;
//     int spc=1;
//     int a=1;
//     for(int i=1;i<=2*n+1;i=i+1){
//         int b=a+64;
//         char(ch)=(char)b;
//         printf("%c",ch);
        
//         a=a+1;
//     }
    
//     printf("\n");
//     for(int i=1;i<=n;i=i+1){
//         int a=1;
//         for(int j=1;j<=str;j=j+1){
//             int b=a+64;
//         char(ch)=(char)b;
//         printf("%c",ch);
            
//             a=a+1;
//         }
//         for(int k=1;k<=spc;k=k+1){
//             printf(" ");
//         }
//          for(int j=1;j<=str;j=j+1){
//             int b=a+64;
//         char(ch)=(char)b;
//         printf("%c",ch);
            
//             a=a+1;
//         }
       
//         str=str-1;
//         spc=spc+2;
//         printf("\n");

//     }
     
    

//     return 0;
// }

#include<stdio.h>
#include<limits.h>
int main(){
    int arr[5]={55,2,61,24,84};
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
