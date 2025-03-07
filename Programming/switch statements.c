#include <stdio.h>
int main(){
	int x,y,z;
	float ans;

	printf("Enter number\n");
	scanf("%d",&x);
	printf("Enter number\n");
	scanf("%d",&y);
	printf("Enter number from 1-4\n1(+),2(-),3(*),4(/)");
	scanf("%d",&z);
	switch(z)
	{
	    case  1:ans=x+y;
		break;
		case  2:ans=x-y;
		break;
		case  3:ans=x*y;
		break;
		case  4:ans=x/y;
		break;
	    default:printf("Error");
		printf("answer %f",ans);

	}

	}
