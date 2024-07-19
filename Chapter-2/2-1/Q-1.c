#include <stdio.h>

 main() {
    int a = 12;
    int b = 6;

    int addition = a + b;
    int subtraction = a - b;
    int multiplication = a * b;
    int division = a / b;
    int modulo = a % b;

    printf("Addition of %d and %d is %d\n", a, b, addition);
    printf("Subtraction of %d and %d is %d\n", a, b, subtraction);
    printf("Multiplication of %d and %d is %d\n", a, b, multiplication);
    printf("Division of %d and %d is %d\n", a, b, division);
    printf("Modulo of %d and %d is %d\n", a, b, modulo);

    printf("%d + %d = %d\n", a, b, addition);
    printf("%d - %d = %d\n", a, b, subtraction);
    printf("%d * %d = %d\n", a, b, multiplication);
    printf("%d / %d = %d\n", a, b, division);
    printf("%d %% %d = %d\n", a, b, modulo);
}
