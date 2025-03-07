#include<stdio.h>
int main()
{
    char currency[50] = "Ksh ",pname[50],name[50];//defining variables
	int quantity;
	float price,amount,disc,dprice;
	printf("Enter name :");//prompting the user for pname
	scanf("%s",name);//taking input from user
	printf("hello %s!\n",name);
	printf("Enter the product name:\t");
	scanf("%s",pname);
	printf("Enter quantity\t");
	scanf("%i",&quantity);
	printf("enter price\t");
    scanf("%f",&price);
	amount=quantity*price;
	if(amount>10000)disc=0.1*amount;
	else disc=0;
	dprice=amount-disc;
	
	printf("So %s,you have purchased %i %s for a total of %s%.2f",name,quantity,pname,currency,dprice);
	return 0;
}