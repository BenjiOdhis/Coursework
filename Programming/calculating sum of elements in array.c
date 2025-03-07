#include<stdio.h>
#include<limits.h>
int main()
{
	int i,num[8],tot=0,low=INT_MAX,high=INT_MIN;
	
	for(i=0;i<8;i++){
		printf("enter number:");
		scanf("%d",&num[i]);
		if(num[i]>high)high=num[i];
		if(num[i]<low)low=num[i];
		tot=tot+num[i];
	}
	
					printf("total is %d\tbiggest number %d\tsmallest number %d",tot,high,low);
	return 0;
}