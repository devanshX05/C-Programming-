#include<stdio.h>
int step=0;
void tower(int n, char s, char h, char d){
    if(n==0) return;
    tower(n-1,s,d,h);
    printf("%c-->%c\n",s,d);
    step++;
    tower(n-1,h,s,d);

}
int main(){
    int n;
    printf("Number of blocks: ");
    scanf("%d",&n);
    tower(n,'A','B','C');
    printf("Number of steps are: %d",step);

    return 0;
}