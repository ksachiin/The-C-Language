#include <stdio.h>

main() {
    int size;
    
    // Input array size
    printf("Enter the array's size: ");
    scanf("%d", &size);
    
    // Declare an array of given size
    int arr[size];
    
    // Input array elements
    printf("Enter array's elements:\n");
    for (int i = 0; i < size; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    
    // Output negative elements
    printf("Negative elements from an Array: ");
    int found = 0; // Flag to check if any negative elements are found
    
    for (int i = 0; i < size; i++) {
        if (arr[i] < 0) {
            if (found)
                printf(", ");
            printf("%d", arr[i]);
            found = 1;
        }
    }
    
    if (!found) {
        printf("No negative elements found");
    }
    
    printf("\n");
    
}
