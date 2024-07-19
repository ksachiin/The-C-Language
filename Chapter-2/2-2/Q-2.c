#include <stdio.h>
main() {
    // Declare variables
    float length, width, area;
    
    // Input length and width from user
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);
    
    printf("Enter the width of the rectangle: ");
    scanf("%f", &width);
    
    // Calculate area
    area = length * width;
    
    // Display the area
    printf("Area of the rectangle with length %.2f and width %.2f = %.2f square units\n", length, width, area);

}
