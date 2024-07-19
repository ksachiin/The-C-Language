#include <stdio.h>

main() {
    float first_angle, second_angle, third_angle;

    printf("Enter First angle: ");
    scanf("%f", &first_angle);

    printf("Enter Second angle: ");
    scanf("%f", &second_angle);

    third_angle = 180 - (first_angle + second_angle);

    printf("Third angle: %.2f\n", third_angle);

}
