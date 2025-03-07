#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define a structure to store student data
struct Student {
    char name1[10];   // First name
    char name2[10];   // Surname
    int eng;          // English score
    int kis;          // Kiswahili score
    int mat;          // Mathematics score
    int total;        // Total score
    float average;    // Average score
    char grade[2];    // Grade (A, B, C, D, E)
    char pass_fail[5]; // Pass/Fail status
};

// Function to determine grade and pass/fail status
void calculateGradeAndStatus(struct Student *student) {
    student->total = student->eng + student->kis + student->mat;
    student->average = (float) student->total / 3;

    // Determine pass/fail
    if (student->average >= 50) {
        strcpy(student->pass_fail, "PASS");
    } else {
        strcpy(student->pass_fail, "FAIL");
    }

    // Determine grade
    if (student->average >= 80) {
        strcpy(student->grade, "A");
    } else if (student->average >= 60) {
        strcpy(student->grade, "B");
    } else if (student->average >= 50) {
        strcpy(student->grade, "C");
    } else if (student->average >= 40) {
        strcpy(student->grade, "D");
    } else {
        strcpy(student->grade, "E");
    }
}

// Function to compare two students by their average score for sorting
int compare(const void *a, const void *b) {
    struct Student *studentA = (struct Student *)a;
    struct Student *studentB = (struct Student *)b;
    
    // Compare averages in descending order for ranking
    if (studentB->average > studentA->average) return 1;
    if (studentB->average < studentA->average) return -1;
    return 0;
}

int main() {
    struct Student students[100];  // Array to hold up to 100 students
    int j = 0;
    FILE *fptr, *sortedFile;

    // Open the existing file in read mode
    fptr = fopen("exam marks.txt", "r");
    if (fptr == NULL) {
        printf("Error opening the input file.\n");
        return 1; // Terminate if file can't be opened
    }

    // Read the student data from the file
    while (fscanf(fptr, "%s %s\n", students[j].name1, students[j].name2) != EOF) {
        // Read the scores for the student
        fscanf(fptr, "English\tKiswahili\tMathematics\n\t%d\t%d\t%d\n", 
               &students[j].eng, &students[j].kis, &students[j].mat);
        
        // Calculate total, average, grade and pass/fail
        calculateGradeAndStatus(&students[j]);

        // Move to next student in the array
        j++;
    }

    // Close the input file after reading
    fclose(fptr);

    // Sort the students based on average score in descending order
    qsort(students, j, sizeof(struct Student), compare);

    // Open a new file to write the sorted data
    sortedFile = fopen("sorted_exam_marks.txt", "w");
    if (sortedFile == NULL) {
        printf("Error opening the output file.\n");
        return 1; // Terminate if the file can't be opened
    }

    // Write the headers to the new file
    fprintf(sortedFile, "Rank  Name\t\tMarks\t\tAverage\tPass/Fail\tGrade\n");
    fprintf(sortedFile, "---------------------------------------------------------------\n");

    // Write the sorted student data to the new file
    for (int i = 0; i < j; i++) {
        fprintf(sortedFile, "%d\t%-10s %-10s\t%d\t%d\t%d\t%.2f\t%-5s\t%-5s\n", 
                i + 1, students[i].name1, students[i].name2,
                students[i].eng, students[i].kis, students[i].mat,
                students[i].average, students[i].pass_fail, students[i].grade);
    }

    // Close the output file
    fclose(sortedFile);

    // Now, display the results in tabular form on the screen
    printf("\nRanked students based on their average score:\n");
    printf("Rank  Name\t\tMarks\t\tAverage\tPass/Fail\tGrade\n");
    printf("---------------------------------------------------------------\n");

    for (int i = 0; i < j; i++) {
        printf("%d\t%-10s %-10s\t%d\t%d\t%d\t%.2f\t%-5s\t%-5s\n", 
               i + 1, students[i].name1, students[i].name2,
               students[i].eng, students[i].kis, students[i].mat,
               students[i].average, students[i].pass_fail, students[i].grade);
    }

    printf("\nData has been successfully sorted and written to 'sorted_exam_marks.txt'.\n");

    return 0;
}
