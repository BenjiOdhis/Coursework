#include <stdio.h>

int main() {
    int num, mod;
    int binary[32];  // Declare the array to store binary digits at the start
    int i = 0;
    int j;  // Declare the loop variable outside the for loop

    printf("ENTER NUMBER:\t");
    scanf("%d", &num);

    // Check for zero as a special case (binary of 0 is 0)
    if (num == 0) {
        printf("0");
        return 0;
    }

    // Loop until num becomes 0
    while (num > 0) {
        // Get the modulus (remainder when divided by 2)
        mod = num % 2;
        binary[i] = mod;  // Store the binary digit
        i++;

        // Divide num by 2 for the next bit
        num = num / 2;
    }

    // Print the binary number in reverse order (since we stored it backwards)
    printf("Binary equivalent: ");
    for (j = i - 1; j >= 0; j--) {  // Now the loop variable is declared outside
        printf("%d", binary[j]);
    }

    printf("\n");
    return 0;
}
