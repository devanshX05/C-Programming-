#include<stdio.h>
int maze(int cr,int cc,int er,int ec){
    int rightway=0;
    int downway=0;
    if(cr==er,cc==ec ) return 1;
    if(cr==er){ //only rightway call
        rightway= maze(cr, cc+1, er, ec);
    }
    if(cc==ec){ //only downward call
        downway= maze(cr+1, cc, er, ec);
    } 
    if(cr<ec && cc<ec){
        rightway= maze(cr, cc+1, er, ec);
        downway= maze(cr+1, cc, er, ec);
    }
    int totalway= rightway+downway;
    return totalway;
}




int main(){
    int n;
printf("Enter the number of rows of the maze: ");
scanf("%d",&n);
int m;
printf("Enter the number of column of the maze: ");
scanf("%d",&m);
int Noofways=maze(1,1,n,m);
printf("%d",Noofways);
return 0;

}