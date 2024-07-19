#include <stdio.h>

int main() {
    int first, second;

    printf("Enter the first number: ");
    scanf("%d", &first);

    printf("Enter the second number: ");
    scanf("%d", &second);

    printf("Output:\n");

    // Ensure first is less than or equal to second
    if (first > second) {
        int temp = first;
        first = second;
        second = temp;
    }

    // Using while loop to print leap years between first and second
    int year = first;
    while (year <= second) {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            printf("%d", year);
            if (year != second) {
                printf(", ");
            }
        }
        year++;
    }

    printf("\n");
    return 0;
}
