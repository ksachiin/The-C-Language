#include <stdio.h>

int main() {
    int rows, cols;
    float sum = 0.0;
    
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
            sum += arr[i][j]; // Calculate sum of array elements
        }
    }
    
    // Calculate average
    float average = sum / (rows * cols);
    
    // Print the average of the array
    printf("Average of the Array: %.2f\n", average);
    
    return 0;
}
