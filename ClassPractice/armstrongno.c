// #include<stdio.h>
// int main(){
//     int arm=0,n,orig_num,rem;

//     printf("Enetr the numebr: ");
//     scanf("%d",&n);
//     orig_num=n;
//     while(n>0){
//         rem=n%10;
//         arm=arm+(rem*rem*rem);
//         n=n/10;
//     }
//     if(orig_num==arm){
//         printf("Correct");
//     }
// else{
//     printf("Wrong");
// }
//     return 0;
// }

#include<stdio.h>
int main(){
    int rev_num=0;
    int num,rem;
    
    printf("Enter: ");
    scanf("%d ",&num);
    while(num>0){
        rem=num%10;
        rev_num=rev_num*10+rem;
        num=num/10;
    }
    printf("%d",rev_num);
    return 0;
}