#include <stdio.h>
#include <stdlib.h> // Include the necessary header for malloc

// Function to subtract 7 from each element of the array
void subtract7FromArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        arr[i] -= 7;
    }
}

int main() {
    // Get user input for the number of array elements
    int arraySize;
    printf("Enter the number of array elements: ");
    scanf("%d", &arraySize);

    // Dynamically allocate memory for the array
    int *myArray = (int *)malloc(arraySize * sizeof(int));

    if (myArray == NULL) {
        printf("Memory allocation failed. Exiting...\n");
        return 1; // Return an error code
    }

    // Get user input for array elements
    printf("Enter %d array elements:\n", arraySize);
    for (int i = 0; i < arraySize; i++) {
        scanf("%d", &myArray[i]);
    }

    // Display the original array
    printf("Original Array: ");
    for (int i = 0; i < arraySize; i++) {
        printf("%d ", myArray[i]);
    }
    printf("\n");

    // Call the function to subtract 7 from each element
    subtract7FromArray(myArray, arraySize);

    // Display the modified array
    printf("Modified Array: ");
    for (int i = 0; i < arraySize; i++) {
        printf("%d ", myArray[i]);
    }
    printf("\n");

    // Free dynamically allocated memory
    free(myArray);

    return 0;
}

