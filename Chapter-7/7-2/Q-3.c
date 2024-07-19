#include <stdio.h>

main() {
    int maths, english, science;
    float average;

    // Input marks for each subject
    printf("Enter maths marks: ");
    scanf("%d", &maths);

    printf("Enter english marks: ");
    scanf("%d", &english);

    printf("Enter science marks: ");
    scanf("%d", &science);

    // Calculate average
    average = (maths + english + science) / 3.0;

    // Display the average marks
    printf("Average marks: %.2f\n", average);

}
