#include <stdio.h>//program to change celsius to farenheit
int main()
{
	float tempc,tempf;
	printf("enter temperature in degerees celsius:\n");
	scanf("%f",&tempc);
	tempf=(tempc*9/5)+32;
	printf("celsius\t  farenheit\n");
	printf("%.2f\t  %.2f",tempc,tempf);
	return 0;
}