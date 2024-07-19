#include <stdio.h>

 main() {
    int num1, num2, num3, min;

    // Input
    printf("Enter a value of the first number: ");
    scanf("%d", &num1);
    printf("Enter a value of the second number: ");
    scanf("%d", &num2);
    printf("Enter a value of the third number: ");
    scanf("%d", &num3);

    // Using ternary operator to find minimum
    min = (num1 < num2) ? ((num1 < num3) ? num1 : num3) : ((num2 < num3) ? num2 : num3);

    // Displaying the minimum number
    printf("Minimum number is: %d\n", min);

}
