#include <stdio.h>

int main() {
    int num,j;
    printf("Enter a number: ");
    scanf("%d", &num);

    // Array to store binary digits (32 bits)
    int binary[32];

    // Handle the case when num is 0 (binary of 0 is 0)
 
    int i = 0;
    // Convert decimal number to binary using division by 2
    while (1) {
        binary[i] = num % 2;  // Store remainder (binary digit)
        num = num / 2;        // Divide the number by 2
        i++;
        if(num==0){
			break;
		}
    }

    // Print the binary digits in reverse order (since we stored them from LSB to MSB)
    printf("Binary representation: ");
    for ( j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");

    return 0;
}
