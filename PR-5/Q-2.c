#include <stdio.h>

 main() {
    int rows, cols;
    
    // Input array dimensions
    printf("Enter the array's row size: ");
    scanf("%d", &rows);
    printf("Enter the array's column size: ");
    scanf("%d", &cols);
    
    // Declare a 2D array of given dimensions
    int arr[rows][cols];
    
    // Input array elements
    printf("Enter array's elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    
    // Find the largest element
    int largest = arr[0][0];
    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (arr[i][j] > largest) {
                largest = arr[i][j];
            }
        }
    }
    
    // Output the largest element
    printf("The largest element is: %d\n", largest);
    
}
