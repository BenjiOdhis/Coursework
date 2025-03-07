#include<stdio.h>
#include<math.h>
int main(){
	char name[10],name1[10];
	int age,years;
	printf("enter first name:");
	scanf("%s",&name);
		printf("enter surname:");
	scanf("%s",&name1);
	printf("enter age:");
	scanf("%d",&age);
	
	if(age>=18)printf("%s %s,you are eligible for voting.\n",name,name1);
	else years=18-age,printf("%s %s, you are not eligible for voting.You are %d year(s) short.",name,name1,years);
	
	return 0;
}