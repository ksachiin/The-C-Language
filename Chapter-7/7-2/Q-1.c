#include <stdio.h>

 main() {
    int num1, num2;

    // Input
    printf("Enter a value of the first number: ");
    scanf("%d", &num1);
    printf("Enter a value of the second number: ");
    scanf("%d", &num2);

    // Finding minimum number
    if (num1 < num2) {
        printf("Minimum number is: %d\n", num1);
    } else {
        printf("Minimum number is: %d\n", num2);
    }
}
