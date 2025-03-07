#include<stdio.h>

int main() {
    char name1[10], name2[10];
    int j = 0, i, eng, kis, mat, total; 
    float average;
    FILE *fptr;
    
    // Open file in append mode
    fptr = fopen("exam marks.txt", "w");
    if (fptr == NULL) {
        printf("Error opening file\n");
        return 1; // Terminate if file can't be opened
    }

    // Infinite loop, will continue until the user opts to stop
    while (1) {
        j++;  // Increment student count
        
        printf("Student %d\n", j);
        printf("Enter student's first name: ");
        scanf("%s", name1);  // No need for & here, as name1 is a char array
        
        printf("Enter student's surname: ");
        scanf("%s", name2);  // No need for & here
        
        // Write student names to file
        fprintf(fptr, "%s %s\n", name1, name2);
        
        printf("Enter English score: ");
        scanf("%d", &eng);
        
        printf("Enter Kiswahili score: ");
        scanf("%d", &kis);
        
        printf("Enter Mathematics score: ");
        scanf("%d", &mat);
        
        // Write scores to file
        fprintf(fptr, "English\tKiswahili\tMathematics\n\t%d\t%d\t%d\n", eng, kis, mat);
        
        // Calculate total and average
        total = eng + kis + mat;
        average = (float) total / 3;
        
        // Determine pass/fail
        if (average >= 50) {
            fprintf(fptr, "\n\tPASS\n");
        } else {
            fprintf(fptr, "\n\tFAIL\n");
        }
        
        // Determine grade
        if (average >= 80) {
            fprintf(fptr, "\tGrade A\n");
        } else if (average >= 60) {
            fprintf(fptr, "\tGrade B\n");
        } else if (average >= 50) {
            fprintf(fptr, "\tGrade C\n");
        } else if (average >= 40) {
            fprintf(fptr, "\tGrade D\n");
        } else {
            fprintf(fptr, "\tGrade E\n");
        }
        
        // Write detailed information to file
        fprintf(fptr, "%s %s scored a total of %d marks out of the possible 300 marks earning an average of %.2f\n", name1, name2, total, average);

        // Ask user if they want to continue
        printf("\nTo stop, press 0; to continue, press any other number: ");
        scanf("%d", &i);
        
        // Break the loop if user presses 0
        if (i == 0) {
            break;
        }
    }

    // Close file
    fclose(fptr);
    
    printf("\nData has been successfully written to the file.\n");
    return 0;
}
