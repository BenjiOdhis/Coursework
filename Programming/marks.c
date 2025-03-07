#include<stdio.h>
int main(){
    char name1[10],name2[10];
	int j=0,i,eng,kis,mat,total; float average;
		FILE *fptr;
	fptr=fopen("exam marks.txt","a");
	if(fptr==NULL)printf("error file\n\t");
	for(i=1;i>0;)
	{
		j=j++;
	printf(" student %d\n",j);
	printf("Enter student's first name\n\t ");
	scanf("%s",name1);
	
	printf("Enter student's surname\n\t ");
	
	scanf("%s",name2);
	fprintf(fptr,"%s %s\n\t",name1,name2);
	printf("Enter English score \n\t");
	scanf("%d",&eng);
	printf("Enter Kiswahili score\n\t ");
	scanf("%d",&kis);
	printf("Enter Mathematics score\n\t ");
	scanf("%d",&mat);
	fprintf(fptr,"English\tkiswahili Mathematics\n\t%d\t%d\t  %d\n\t",eng,kis,mat);
	total =eng+mat+kis;
	average=(float) total/3;
	if(average>=50)fprintf(fptr,"\n\tPASS\n");
	else fprintf(fptr,"\n\tFAIL\n");
	if(average>=80)fprintf(fptr,"\n\tgrade A");
	else if(average>=60&&average<80)fprintf(fptr,"\n\tgrade B" );
		else if(average>=50&&average<60)fprintf(fptr,"\n\tgrade C" );
			else if(average>=40&&average<50)fprintf(fptr,"\n\tgrade D" );
				else if(average<40)fprintf(fptr,"\n\tgrade E" );
	
	fprintf(fptr,"\n\t\n%s %s scored a total of %d marks out of the posssible 300 marks earning an average of %.2f\n",name1,name2,total,average);
    printf("\nto stop press 0,to continue press any other number\n\t");
    scanf("%d",&i);
	}
		fclose(fptr);
	printf("\nData has been successfuly written to the file.\n");
	return 0;
}