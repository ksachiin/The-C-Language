#include <stdio.h>

int main() {
    int n;

    printf("Enter any number: ");
    scanf("%d", &n);

    printf("Output:\n");

    // Using while loop to print odd numbers from n to 1
    while (n >= 1) {
        if (n % 2 != 0) {
            printf("%d ", n);
        }
        n--;
    }

    printf("\n");
    return 0;
}
