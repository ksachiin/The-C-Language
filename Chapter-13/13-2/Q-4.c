#include <stdio.h>

int main() {
    const int size = 5;  // Assuming a 5x5 array
    
    // Declare a 2D array of given size
    int arr[size][size];
    
    // Input array elements
    printf("Enter array's elements:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    
    // Print and calculate sum of boundary elements
    int sum = 0;
    
    // Print top row
    for (int j = 0; j < size; j++) {
        printf("%d ", arr[0][j]);
        sum += arr[0][j];
    }
    printf("\n");
    
    // Print right column (excluding corners)
    for (int i = 1; i < size - 1; i++) {
        printf("%d", arr[i][size - 1]);
        for (int space = 0; space < size - 1; space++) {
            printf(" ");
        }
        printf("%d\n", arr[i][size - 1]);
        sum += arr[i][size - 1];
    }
    
    // Print bottom row (excluding corners)
    for (int j = size - 1; j >= 0; j--) {
        printf("%d ", arr[size - 1][j]);
        sum += arr[size - 1][j];
    }
    printf("\n");
    
    // Print left column (excluding corners)
    for (int i = size - 2; i > 0; i--) {
        printf("%d", arr[i][0]);
        for (int space = 0; space < size - 1; space++) {
            printf(" ");
        }
        printf("%d\n", arr[i][0]);
        sum += arr[i][0];
    }
    
    // Print sum of boundary elements
    printf("The sum of boundary elements of an Array: %d\n", sum);
    
    return 0;
}
