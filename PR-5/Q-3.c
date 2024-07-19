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
    
    // Compute the transpose of the array
    int transpose[cols][rows]; // Transpose will have dimensions cols x rows
    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transpose[j][i] = arr[i][j];
        }
    }
    
    // Output the transpose matrix
    printf("The transpose matrix of an array:\n");
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }
    
}
