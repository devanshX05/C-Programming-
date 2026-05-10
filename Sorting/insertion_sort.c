#include<stdio.h>
int main(){
    int a[50],n;
    printf("Enter the size:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=1;i<n;i++){
       int key=a[i];
       int j=i-1;
       while(j>=0 && a[j]>key){
        a[j+1]=a[j];
        j--;
       } 
       a[j+1]=key;
    }
    printf("Sorted:");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}