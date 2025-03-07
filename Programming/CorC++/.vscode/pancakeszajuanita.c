#include<stdio.h>
int main(){
    int x=150,y,tot;
    printf("Enter no of pancakes:\t");
    scanf("%d",&y);
    if(y<=5){
      x=100;
    }
    tot=x*y;
    printf("total price:\t%d",tot);
    return 0;
}