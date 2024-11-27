#include <stdio.h>
#include <stdlib.h> // Include the necessary header for malloc

// Function to multiply each element of the array by two and return the address of the first element
int* multiplyByTwo(int *arr, int size) {
	int i;
    for (i = 0; i < size; i++) {
        arr[i] *= 2;
    }
    return arr;
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
    int i;
    for (i = 0; i < arraySize; i++) {
        scanf("%d", &myArray[i]);
    }

    // Display the original array
    printf("Original Array: ");
    for (i = 0; i < arraySize; i++) {
        printf("%d ", myArray[i]);
    }
    printf("\n");

    // Call the function to multiply each element by two
    int *resultArray = multiplyByTwo(myArray, arraySize);

    // Display the modified array
    printf("Modified Array: ");
    for (i = 0; i < arraySize; i++) {
        printf("%d ", resultArray[i]);
    }
    printf("\n");

    // Free dynamically allocated memory
    free(myArray);

    return 0;
}

