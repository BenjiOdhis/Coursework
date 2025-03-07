#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
	char mystring[10];int x,y;double ans;
	FILE *fptr;//file pointer declaration
	fptr=fopen("output.txt","a");//Open file in append mode to store the results
	if(fptr== NULL)printf("Error opening file!\n");//checks if the file was opened succesfully
	printf("Enter your string\t");
	scanf("%s",&mystring);
	fprintf(fptr,"Entered string: %s\n",mystring);
	printf("Enter number\t");
	scanf("%d",&y);
	ans=sqrt(y);//function call
	printf("square root of your number is \t%.2f\t\n",ans);
	fprintf(fptr,"Square root of %d is %.2f\n",y,ans);
	x=strlen(mystring);
	printf("string to  upper case is %s\nstring length is %d\n",strupr(mystring),x);
	fprintf(fptr,"String in uppercase: %s\nString length: %d\n",mystring,x);
	fclose(fptr);
	printf("\nData has been successfuly written to the file.\n");
	return 0;

	}
