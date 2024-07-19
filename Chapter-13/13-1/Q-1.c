#include <stdio.h>

int main() {
    int size;
    
    // Input array size
    printf("Enter array size: ");
    scanf("%d", &size);
    
    // Declare an array of given size
    int arr[size];
    
    // Input array elements
    printf("Enter array elements:\n");
    for (int i = 0; i < size; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    
    // Calculate and print the length of the array
    int length = sizeof(arr) / sizeof(arr[0]);
    printf("Length of the array: %d\n", length);
    
    return 0;
}
