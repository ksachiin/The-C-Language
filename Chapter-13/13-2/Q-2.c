#include <stdio.h>

int main() {
    int rows, cols;
    
    // Input array dimensions
    printf("Enter the array's row size: ");
    scanf("%d", &rows);
    printf("Enter the array's column size: ");
    scanf("%d", &cols);
    
    // Declare arrays A, B, and C of given dimensions
    int A[rows][cols], B[rows][cols], C[rows][cols];
    
    // Input array A elements
    printf("Enter array A's elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
    }
    
    // Input array B elements
    printf("Enter array B's elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("b[%d][%d] = ", i, j);
            scanf("%d", &B[i][j]);
        }
    }
    
    // Perform addition and store in array C
    printf("Array C is:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            C[i][j] = A[i][j] + B[i][j];
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
