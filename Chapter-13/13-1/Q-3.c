#include <stdio.h>

int main() {
    int size;
    
    // Input array size
    printf("Enter array size: ");
    scanf("%d", &size);
    
    // Declare arrays A, B, and C of given size
    int A[size], B[size], C[size];
    
    // Input array A elements
    printf("Enter array A's elements:\n");
    for (int i = 0; i < size; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &A[i]);
    }
    
    // Input array B elements
    printf("Enter array B's elements:\n");
    for (int i = 0; i < size; i++) {
        printf("b[%d] = ", i);
        scanf("%d", &B[i]);
    }
    
    // Perform addition and store in array C
    printf("Array C is: ");
    for (int i = 0; i < size; i++) {
        C[i] = A[i] + B[i];
        printf("%d", C[i]);
        if (i != size - 1) {
            printf(", ");
        }
    }
    printf("\n");
    
    return 0;
}
