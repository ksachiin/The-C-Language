#include <stdio.h>

int main() {
    int N, sum = 0;

    // Input
    printf("Enter any number: ");
    scanf("%d", &N);

    // Calculating sum using a for loop
    for (int i = 1; i <= N; ++i) {
        sum += i;
    }

    // Output
    printf("The sum of all numbers from 1 to %d is: %d\n", N, sum);

    return 0;
}
