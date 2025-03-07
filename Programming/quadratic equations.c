#include <stdio.h>
#include <math.h>
int main(){
	float x1,x2,a,b,c;
	int x;
	printf("input a:\n");
	scanf("%f",&a);
    printf("input b:\n");
	scanf("%f",&b);
    printf("input c:\n");
	scanf("%f",&c);
	x1 = (-b+sqrt((b*b)-(4*a*c)))/(2*a);
    x2 = (-b-sqrt((b*b)-(4*a*c)))/(2*a);
    printf("x=%.2f\nx=%.2f",x1,x2);
	return  0;
	

	
}