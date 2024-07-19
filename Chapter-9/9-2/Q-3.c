#include <stdio.h>

int main() {
    int n, i = 1;

    printf("Enter any number: ");
    scanf("%d", &n);

    printf("Output:\n");

    // Using while loop to print numbers from 1 to n
    while (i <= n) {
        printf("%d ", i);
        i++;
    }

    printf("\n");
    return 0;
}
