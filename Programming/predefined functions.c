#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
	char mystring[10];int x,y;double ans;
	printf("Enter your string\t");
	scanf("%s",&mystring);
	printf("Enter number\t");
	scanf("%d",&y);
	ans=sqrt(y);//function call
	printf("square root of your number is \t%f\t\n",ans);
	x=strlen(mystring);
	printf("string to  upper case is %s\nstring length is %d",strupr(mystring),x);
	
	return 0;
}