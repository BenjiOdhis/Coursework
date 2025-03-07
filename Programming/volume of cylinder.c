//recalling library of input and output functions
#include<stdio.h>
//initiates start of program
int main(){
	//declaration of variables,setting PI as a constant
	const float PI =3.142;
	float r,h,v;
	//prompts the user for radius
	printf("Enter radius ");

	scanf("%f",&r);
	printf("Enter height");
	scanf("%f ",&h);
	v=PI*r*r*h;
	printf("The volume of the cylinder is %.2f metres cubic",v);
	return 0;
	
}