//recalling library of inout and output functions
#include<stdio.h>
//initiating start of program
int main()
{
	//setting PI as a constant
	const float PI = 3.142 ;//PI will always be 3.142 makes it read only ie ROM
	//declaring rad as an integer
	int rad;
	//prompting the user for radius
	printf("enter radius");
	//storing the user's input in given address
	scanf("%d",&rad);
	//declaring area as a float and giving the formula to obtain it
		float  Area=PI*rad*rad;
		//displaying the area and value of PI to the user
	printf("Using PI as %.3f,Area of the circle is %.4f meters squared",PI,Area);
}