#include <stdio.h>

int main() {
    int number, originalNumber, digitCount = 0;

    // Input
    printf("Enter any number: ");
    scanf("%d", &number);

    // Store original number for later comparison
    originalNumber = number;

    // Counting digits in the number
    do {
        number = number / 10;
        digitCount++;
    } while (number != 0);

    // Output
    printf("Total number of digits in %d: %d\n", originalNumber, digitCount);

    return 0;
}

