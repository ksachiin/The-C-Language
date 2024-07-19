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
    
    // Print the array
    printf("\nEntered Array:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    
    // Sum of elements in a specific row
    int row;
    printf("\nEnter row number: ");
    scanf("%d", &row);
    
    if (row < 0 || row >= rows) {
        printf("Invalid row number!\n");
        return 1;
    }
    
    printf("Elements of row %d: ", row);
    int sumRow = 0;
    for (int j = 0; j < cols; j++) {
        printf("%d", arr[row][j]);
        sumRow += arr[row][j];
        if (j < cols - 1) {
            printf(", ");
        }
    }
    printf("\nThe sum of row %d: %d\n", row, sumRow);
    
    // Sum of elements in a specific column
    int col;
    printf("\nEnter column number: ");
    scanf("%d", &col);
    
    if (col < 0 || col >= cols) {
        printf("Invalid column number!\n");
        return 1;
    }
    
    printf("Elements of column %d: ", col);
    int sumCol = 0;
    for (int i = 0; i < rows; i++) {
        printf("%d", arr[i][col]);
        sumCol += arr[i][col];
        if (i < rows - 1) {
            printf(", ");
        }
    }
    printf("\nThe sum of column %d: %d\n", col, sumCol);
    
}
