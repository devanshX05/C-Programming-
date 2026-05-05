#include<stdio.h>
int main(){
    int a1[10],a2[10],arr[20],n;
    printf("Enter the size of an array:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a1[i]);
    }
    for(int i=0;i<n;i++){
        scanf("%d",&a2[i]);
    }
    for(int i=0;i<n;i++){
         arr[i]=a1[i];
    }
    for(int i=0;i<n;i++){
        arr[n+i]=a2[i];
    }
    for(int i=0;i<2*n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}