#include <stdio.h>
#include <conio.h> // For getch() on Windows

#define MAX_BITS 32 // Defining the maximum number of bits for binary representation

int main() {
    int binary[MAX_BITS], i, j, num;
    FILE* file = fopen("denary_to_binary.txt", "w");  // Change to write mode for testing

    // Check if the file opened successfully
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1; // Return 1 to indicate failure to open the file
    }

    // Debug: Print file path to console
    printf("Writing to file: denary_to_binary.txt\n");

    // Write the header for the table in the file
    fprintf(file, "Denary Number\tBinary Representation\n");

    // Start an infinite loop to repeatedly take user input
    while (1) {
        printf("Enter number:\t");  // Prompt user for number
        
        // Read an integer input (denary number)
        if (scanf("%d", &num) != 1) {
            // If input is not a valid integer
            printf("Invalid input. Exiting.\n");
            break;  // Exit on invalid input
        }

        // Debug: Print the input number to console
        printf("You entered: %d\n", num);

        // Write the denary number to the file
        fprintf(file, "%d\t", num);

        // Handle the case if num is 0
        if (num == 0) {
            fprintf(file, "0");
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
            for (j = i - 1; j >= 0; j--) {
                fprintf(file, "%d", binary[j]);
            }
        }

        fprintf(file, "\n");

        // Flush the buffer to ensure the data is written to the file immediately
        fflush(file);

        // Inform the user how to stop the program
        printf("Press the Escape (Esc) key to stop the program.\n");

        // Read the next key press to check if it's Escape
        char ch = getch(); // Get a single character without needing Enter
        if (ch == 27) {  // 27 is the Escape key ASCII value
            break;  // Break the loop if Escape key is pressed
        }
    }

    // Close the file after use
    fclose(file);

    return 0;  // Terminate program
}
