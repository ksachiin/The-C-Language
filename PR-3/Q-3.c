#include <stdio.h>

int main() {
    int number, firstDigit, lastDigit, sum;

    // Input
    printf("Enter any number: ");
    scanf("%d", &number);

    // Extracting the last digit
    lastDigit = number % 10;

    // Extracting the first digit
    firstDigit = number;
    while (firstDigit >= 10) {
        firstDigit /= 10;
    }

    // Calculating the sum of first and last digits
    sum = firstDigit + lastDigit;

    // Output
    printf("The sum of the first and the last digit of %d: %d\n", number, sum);

    return 0;
}
    