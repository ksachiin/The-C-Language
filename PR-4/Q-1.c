#include <stdio.h>

int main() {
    int rows = 5;

    // Outer loop for rows
    for (int i = 1; i <= rows; i++) {
        
        for (int j = 1; j <= i; j++) {
            printf("%d ", 40 + j); 
        }
        printf("\n"); 
    }

}
