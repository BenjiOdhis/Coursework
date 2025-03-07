#include <stdio.h>
int main(){
	char grd;
	printf("Enter grade\n");
	scanf("%c",&grd);
	switch(grd){
		case'A':printf("Excellent");
		break;
	case'B':printf("Good");
		break;
	case'C':printf("Average");
		break;
		case'D':printf("Below Average");
		break;
		case'F':printf("Fail");
		break;
		default:printf("Invalid grade:");
		break;
	}
}