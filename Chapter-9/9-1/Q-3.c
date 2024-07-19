#include <stdio.h>

int main() {
    int n, i = 2;  // Start from 2 because 1 is odd

    printf("Enter any number: ");
    scanf("%d", &n);

    printf("Even numbers from 1 to %d are: ", n);
    
    // Using do-while loop to print even numbers from 1 to n
    do {
        printf("%d ", i);
        i += 2;  // Increment by 2 to get the next even number
    } while (i <= n);

    printf("\n");
    return 0;
}

