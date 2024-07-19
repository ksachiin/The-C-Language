#include <stdio.h>

int main() {
    int N;
    long long factorial = 1; // Use long long to handle larger factorial values

    // Input
    printf("Enter any number: ");
    scanf("%d", &N);

    // Calculating factorial using a for loop
    for (int i = 1; i <= N; ++i) {
        factorial *= i;
    }

    // Output
    printf("The factorial of %d is: %lld\n", N, factorial);

    return 0;
}
