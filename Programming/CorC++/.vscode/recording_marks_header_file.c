#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *fptr;
	fptr=fopen("exam_marks.txt","w");
	if(fptr==NULL){
        printf("error opening  file\n\t");
        return 1;
		
    }
	fprintf(fptr,"Name\tEnglish\tkiswahili\tMathematics\tTotal\tAverage\tGrade\tOverall\n");
	fclose(fptr);
	printf("\nData has been successfuly written to the file.\n");
	
   
    return 0;
}