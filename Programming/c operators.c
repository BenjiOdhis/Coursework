#include<stdio.h>
#include<math.h>
int main(){
	int mynum = 150;
	int sum1 = mynum + 50;
	int sum2= sum1+100;
	float modulus1=sum2%sum1;
	float sum3=modulus1++;
	printf("%d,%d,%d,%f,%f",mynum,sum1,sum2,modulus1,sum3);
	
}
