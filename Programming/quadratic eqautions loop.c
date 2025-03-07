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
	printf("your quadratic equation is %.2fx^2+%.2fx+%.2f=0:\n",a,b,c);
	printf("would you like to proceed?\nPress 1 if you do and 0 to fill a,b& c again: \t");
	scanf("%d",&x);
	if (x==0){
		float x1,x2,a,b,c;
	int x;
	printf("input a:\n");
	scanf("%f",&a);
    printf("input b:\n");
	scanf("%f",&b);
    printf("input c:\n");
	scanf("%f",&c);
	printf("your quadratic equation is %.2fx^2+%.2fx+%.2f=0:\n",a,b,c);
	printf("would you like to proceed?\nPress 1 if you do and 0 to fill a,b& c again: \t");
	scanf("%d",&x);
	return 0;
	}else if (x==0){
		float x1,x2,a,b,c;
	int x;
	printf("input a:\n");
	scanf("%f",&a);
    printf("input b:\n");
	scanf("%f",&b);
    printf("input c:\n");
	scanf("%f",&c);
	printf("your quadratic equation is %.2fx^2+%.2fx+%.2f=0:\n",a,b,c);
	printf("would you like to proceed?\nPress 1 if you do and 0 to fill a,b& c again: \t");
	scanf("%d",&x);
	return 0;
	}
	{
	x1 = (-b+sqrt((b*b)-(4*a*c)))/(2*a);
    x2 = (-b-sqrt((b*b)-(4*a*c)))/(2*a);
    printf("x=%.2f\nx=%.2f",x1,x2);
	return  0;
	}

	
}