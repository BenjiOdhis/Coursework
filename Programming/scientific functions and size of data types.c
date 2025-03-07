#include<stdio.h>
int main(){
	float x = 1e2;//1e2 siginifies 1*10 to the power of two 
	double y = 1E3;
	int myint;
	char mychar;
	printf("%f+%.1lf\n",x,y);
	printf("%lu\n",sizeof(myint));
	printf("%lu\n",sizeof(mychar));
	printf("%lu",sizeof(y));
	
	return 0;
}