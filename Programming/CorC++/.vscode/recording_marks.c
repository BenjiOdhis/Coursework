#include<stdio.h>
#include<stdlib.h>
int main(){
    char name1[10],name2[10];
	int j=0,i,eng,kis,mat,total; float average;
		FILE *fptr;
	fptr=fopen("exam_marks.txt","a");
	if(fptr==NULL){
        printf("error opening  file\n\t");
        return 1;
		
    }
	
	for(i=1;i>0;)
	{
		j++;
	printf(" student %d\n",j);
	printf("Enter student's  name;order(surname(spacebar)first name)\n\t ");
	scanf("%s %s",name1,name2);
	
	
	printf("Enter English score \n\t");
	scanf("%d",&eng);
	printf("Enter Kiswahili score\n\t ");
	scanf("%d",&kis);
	printf("Enter Mathematics score\n\t ");
	scanf("%d",&mat);
	
	total =eng+mat+kis;
	average=(float) total/3;
	
	fprintf(fptr,"%s %s\t%d\t%d\t%d\t%d\t%.2f",name1,name2,eng,kis,mat,total,average);
    if(average>=80)fprintf(fptr,"\tgrade A");
	else if(average>=60&&average<80)fprintf(fptr,"\tgrade B" );
		else if(average>=50&&average<60)fprintf(fptr,"\tgrade C" );
			else if(average>=40&&average<50)fprintf(fptr,"\tgrade D" );
				else if(average<40)fprintf(fptr,"\tgrade E" );
                
	if(average>=50)fprintf(fptr,"\tPASS\n");
	else fprintf(fptr,"\tFAIL\n");
	

    printf("\nto stop press 0,to continue press any other number\n\t");
    scanf("%d",&i);
	system("cls");
	}
		fclose(fptr);
	printf("\nData has been successfuly written to the file.\n");
	return 0;
}