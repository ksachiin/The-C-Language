#include <stdio.h>

int main() {
    int N;

    // Input
    printf("Enter any number: ");
    scanf("%d", &N);

    // Printing multiplication table using a for loop
    printf("Multiplication table of %d:\n", N);
    for (int i = 1; i <= 10; ++i) {
        printf("%d * %d = %d\n", N, i, N * i);
    }

    return 0;
}
