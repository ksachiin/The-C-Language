#include <stdio.h>

 main() {
    float celsius, fahrenheit;
    
    // Input temperature in Celsius
    printf("Enter the temperature in Celsius: ");
    scanf("%f", &celsius);
    
    // Convert Celsius to Fahrenheit
    fahrenheit = (celsius * 9 / 5) + 32;
    
    // Output temperature in Fahrenheit
    printf("The temperature in Fahrenheit: %.1f\n", fahrenheit);
    
}
