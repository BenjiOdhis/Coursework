#include<stdio.h>
int main()
{
	int i,j,num[3][4];int r=0,c=0;

	for(i=0;i<3;i++){
			r=r++;
		for(j=0;j<4;j++){
		
			c=c++;
			if(c>4)c=1;
			printf("Enter value of row %d column %d\t",r,c);
			scanf("%d",&num[i][j]);	
		}
		printf("\n");
	}
	printf("Arrray elements display\n");
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			printf("\t%d",num[i][j]);
		}
		printf("\n");
	}
	return 0;
}