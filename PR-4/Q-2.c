#include <stdio.h>

int main() {
    int rows = 4;
    int count = 11; 

    // Outer loop for rows
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", count);
            count++;
        }
        printf("\n");
    }

}
