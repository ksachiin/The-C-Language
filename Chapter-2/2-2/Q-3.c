#include <stdio.h>

main() {
    // Declare variables
    float base, height, area;
    
    // Input base and height from user
    printf("Enter the base of the triangle: ");
    scanf("%f", &base);
    
    printf("Enter the height of the triangle: ");
    scanf("%f", &height);
    
    // Calculate area
    area = 0.5 * base * height;
    
    // Display the area
    printf("Area of the triangle with base %.2f and height %.2f = %.2f square units\n", base, height, area);
    
}
