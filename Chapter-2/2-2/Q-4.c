#include <stdio.h>

main() {
    // Declare variables
    float principal, rate, time, simple_interest;
    
    // Input principal amount, rate, and time from user
    printf("Enter the principal amount: ");
    scanf("%f", &principal);
    
    printf("Enter the annual interest rate (in percentage): ");
    scanf("%f", &rate);
    
    printf("Enter the time period in months: ");
    scanf("%f", &time);
    
    // Calculate simple interest
    simple_interest = (principal * rate * time) / 100.0;
    
    // Display the simple interest
    printf("Simple Interest = %.2f\n", simple_interest);
    
}
