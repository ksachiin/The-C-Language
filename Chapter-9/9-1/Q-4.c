#include <stdio.h>

int main() {
    int n;
    long long int a = 0, b = 1, nextTerm;

    printf("Enter any number: ");
    scanf("%d", &n);

    printf("Fibonacci series up to %d numbers:\n", n);

    // Special case for n = 1
    if (n >= 1) {
        printf("%lld", a);
    }
    // Special case for n >= 2
    if (n >= 2) {
        printf(", %lld", b);
    }

    // Using for loop to generate Fibonacci series
    for (int i = 3; i <= n; i++) {
        nextTerm = a + b;
        printf(", %lld", nextTerm);
        a = b;
        b = nextTerm;
    }

    printf("\n");
    return 0;
}
