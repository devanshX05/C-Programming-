#include <stdio.h>
int main (){

    printf("Mathematics:");
    float m1=91;
    scanf("%f",&m1);
    printf("\nPhysics:");
    float m2=88;
    scanf("%f",&m2);
    printf("\nChemistry:");
    float m3=76;
    scanf("%f",&m3);
    float z=(m1+m2+m3)*100/300;
    printf("\nAverage percentage of PCM is: %f",z);
    if(100>=z>=90){
        
        printf("Excellent");
        if(90>=z>=80){
           
            printf("Very Good");
            if(80>=z>=70){
                
                printf("Good");
                if(70>=z>=60){
                   
                    printf("Can do better");
                }
            }    
        }
    }
    else{
        printf("\nFail");
    }

    return 0;
}
