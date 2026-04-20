#include<stdio.h>
int main(){
    int a[10],n;
    printf("Enter the size of an array:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Enter element %d:",i+1);
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n-1;i++){
        int min_index=i;
        for(int j=i+1;j<n;j++){
            if(a[min_index]>a[j]){
                min_index=j;
            }
        }
        if(min_index!=i){
            int temp=a[i];
            a[i]=a[min_index];
            a[min_index]=temp;
        }
    }
    for(int i=0;i<n;i++){
            printf("%d ",a[i]);
        }
    return 0;
}