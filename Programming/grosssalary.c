#include<stdio.h>
int main(){
	char currency[10]="Ksh" ,name[10],name1[10];
	float hours,rate,gross,tax,net;
	printf("Enter your first name ");
	scanf("%s",&name);
	printf("Enter your surname ");
	scanf("%s",&name1);
	printf("Enter hours worked ");
	scanf("%f",&hours);
	printf("enter rate ");
	scanf("%f",&rate);
	//calculates the gross salary
	gross=hours*rate;
	//determines the tax
	if(gross>100000)tax=0.2*gross;
	else if(gross>=50000) tax=0.1*gross;
	else tax=0*gross;
	//calculates net salary
	net=gross-tax;
	printf("%s %s's net salary is %s %.2f",name,name1,currency,net);
	
	return 0;
}