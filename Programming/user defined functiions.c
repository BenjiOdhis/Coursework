#include<stdio.h>
int add (int x, int y){
	int ans;
	ans=x+y;
	return ans;
}
int multiply(int m,int n,int g){
	int product;
	product=m*n*g;
	return product;
}
float area(int r){
	int answ;float pi=3.142;
	answ=pi*r*r;
	return answ;
}
int main()
{
	int a,b,result,rad,m,n,g;float ar;
	printf("Enter number for summation\t\n");
	scanf("%d",&a);
		printf("Enter number for summation\t\n");
	scanf("%d",&b);
	result=add(a,b);//function call
	printf("Sum is \t%d\n",result);
	printf("Enter radius\t\n");
	scanf("%d",&rad);
	ar=area(rad);//function call
	printf("area of the circle is\t%f\n",ar);
		printf("Enter number for multiplication\t\n");
	scanf("%d",&m);
	printf("Enter number for multiplication\t\n");
	scanf("%d",&n);
	printf("Enter number for multiplication\t\n");
	scanf("%d",&g);
	result=multiply(m,n,g);
	printf("\nproduct is %d",result);
	


	return 0;
}