#include<stdio.h>
int main(){
    int a[80];
    int n;
    printf("Enter the size of an array: ");
    scanf("%d",&n);
    for(int i=0;i<n;i=i+1){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n-1;i++){
        int min_index=0;
        for(int j=i+1;j<n;j++){
            if(a[min_index]>a[j]){
                min_index=i;
            }
        }
        if(min_index!=i){
            int temp=a[i];
            a[i]=a[min_index];
            a[min_index]=temp;
        }
    }
    return 0;
}