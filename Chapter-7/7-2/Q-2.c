#include <stdio.h>

 main() {
    int number;

    // Input
    printf("Enter any number: ");
    scanf("%d", &number);

    // Checking conditions using ladder if-else
    if (number > 0) {
        printf("This number is Positive\n");
    } else if (number < 0) {
        printf("This number is Negative\n");
    } else {
        printf("This number is Neutral\n");
    }

}
