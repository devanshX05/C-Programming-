#include<stdio.h>
int main(){
    int a[10],n;
    for(int i=0;i<n;i++){
        printf("Size:");
        scanf("%d",&n);
    }
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int key;
    for(int i=1;i<n;i++){
        key=a[i];
        int j=i-1;
        while(j>=0 && a[j]>a[j+1]){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    }
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}