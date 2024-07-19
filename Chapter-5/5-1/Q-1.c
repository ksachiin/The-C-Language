#include <stdio.h>

int main() {
    int x, y, result;

    // Ask the user for the values of x and y
    printf("Enter the value of x: ");
    scanf("%d", &x);
    printf("Enter the value of y: ");
    scanf("%d", &y);

    // Calculate the result of (x + y)^2
    result = (x + y) * (x + y);

    // Print the result
    printf("The result of (x + y)^2 is: %d\n", result);

}
