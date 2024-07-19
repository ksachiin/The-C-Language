#include <stdio.h>

int main() {
    char current_char = 'a';

    printf("Output: ");

    do {
        printf("%c", current_char);
        current_char += 4; // Skip 3 alphabets and move to the next one
        if (current_char <= 'z') {
            printf(", "); // Print comma and space unless it's the last character
        }
    } while (current_char <= 'z');

    printf("\n");

    return 0;
}
