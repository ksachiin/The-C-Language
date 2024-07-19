#include <stdio.h>

int main() {
    int size;
    int sum_main = 0, sum_secondary = 0;
    
    // Input array dimensions (assuming it's a square matrix)
    printf("Enter the array's row & column size: ");
    scanf("%d", &size);
    
    // Declare a 2D array of given dimensions
    int arr[size][size];
    
    // Input array elements
    printf("Enter array's elements:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
            
            // Calculate sum of main diagonal elements
            if (i == j) {
                sum_main += arr[i][j];
            }
            
            // Calculate sum of secondary diagonal elements
            if (i + j == size - 1) {
                sum_secondary += arr[i][j];
            }
        }
    }
    
    // Print the sum of diagonal elements
    printf("The sum of diagonal elements of an Array: %d\n", sum_main + sum_secondary);
    
    return 0;
}
