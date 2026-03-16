// #include<stdio.h>
// void func(int x[]){
//     int temp=x[0];
//     x[0]=x[1];
//     x[1]=temp;
//     return;

// }
// int main(){
//     int arr[2]={7,9};
//     printf("%d%d \n",arr[0],arr[1]);
//     func(arr);
//     printf("%d%d",arr[0],arr[1]);
//     return 0;
// }


// #include<stdio.h>
// int main(){
//     int rem,num;
//     printf("ENter the number: ");
//     scanf("%d",&num);
//     int rev_num=0;
//     int sum=0;
//     while(num>0){
        
        
//         rem=num%10;
//         sum=sum+rem;
//         num=num/10;

//     }
//     printf("%d",sum);
//     return 0 ;
// }

#include<stdio.h>
int main(){
    int arm=0;
    int num,rem;
    int num_final=num;
    scanf("%d",&num);
    while(num>0){
        rem=num%10;
        arm=arm+(rem*rem*rem);
        num=num/10;
    }
    if(num_final==arm){
        printf("It is an armstrong no. ");
    }
    else{
        printf("It is not an armstrong");
    }
    return 0;
}