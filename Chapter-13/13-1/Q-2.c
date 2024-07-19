#include <stdio.h>

int main() {
    int size;
    float sum = 0.0;
    
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
        sum += arr[i]; // Calculate sum of array elements
    }
    
    // Calculate average
    float average = sum / size;
    
    // Print the average of the array
    printf("Average of the Array: %.1f\n", average);
    
    return 0;
}
