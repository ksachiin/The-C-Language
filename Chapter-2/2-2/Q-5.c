#include <stdio.h>
#define PI 3.14

main() {
    float radius, perimeter;

    // Ask the user for the radius
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Calculate the perimeter
    perimeter = 2 * PI * radius;

    // Print the perimeter
    printf("The perimeter of the circle is: %.2f\n", perimeter);

}
