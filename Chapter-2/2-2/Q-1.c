#include <stdio.h>
main() {
    // Define constant PI
    const float PI = 3.14;
    
    // Declare variables
    float radius, area;
    
    // Input radius from user
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    
    // Calculate area
    area = PI * radius * radius;
    
    // Display the area
    printf("Area of the circle with radius %.2f = %.2f square units\n", radius, area);

}

