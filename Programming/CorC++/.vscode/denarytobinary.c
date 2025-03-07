#include<stdio.h>
#include<conio.h>
#define MAX_BITS 32 // Defining the maximum number of bits for binary representation

int main() {
    int binary[MAX_BITS], i, j, num, k;

    // Open the file in append mode
    FILE* file = fopen("denary_to_binary.txt", "a");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1; // Return 1 to indicate failure to open the file
    }

    // Start a loop to repeatedly take user input until the user presses 0 to exit
    while (1) {
        printf("Enter number:\t");  // Prompt user for number
        scanf("%d", &num);  // Take input from user
        system("cls");
        fprintf(file, "\nDenary number:\t%d", num);  // Write denary number to file

        // Handle the case if num is 0
        if (num == 0) {
            fprintf(file, "\nBinary representation:\t0");
        } else {
            // Reset i for each new number
            i = 0;

            // Divide the number and store the modulus in the binary array until num is 0
            while (num > 0) {
                binary[i] = num % 2;
                num = num / 2;
                i++;
            }

            // Write the binary representation to the file
            fprintf(file, "\nBinary representation:\t");

            // Print the contents of the array in reverse order to obtain binary representation
            for (j = i - 1; j >= 0; j--) {
                fprintf(file, "%d", binary[j]);
            }
        }

        fprintf(file, "\n");

        // Ask the user whether they want to continue or stop
        printf("To stop press 0, to input another denary number press any number:\t");
        scanf("%d", &k);  // Take input for k

        // If user enters 0, break the loop and stop the program
        if (k == 0) {
            break;
        }
    }

    // Close the file after use
    fclose(file);

    return 0;  // Terminate program
}
