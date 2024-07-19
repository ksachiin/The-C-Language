#include <stdio.h>
#include <math.h>

int main() {
    int x, y, result;

    // Input values for x and y
    printf("Enter the value of x: ");
    scanf("%d", &x);
    printf("Enter the value of y: ");
    scanf("%d", &y);

    // Calculate the result
    result = pow(x + y, 3);

    // Print the result
    printf("The result of (x + y)^3 is: %d\n", result);
}
