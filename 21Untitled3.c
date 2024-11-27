#include <stdio.h>

// Function to multiply each element of the array by two and return the address of the first element
int* multiplyByTwo(int *arr, int size) {
	int i;
    for (i = 0; i < size; i++) {
        arr[i] *= 2;
    }
    return arr;
}

int main() {
    // Example array
    int myArray[] = {1, 2, 3, 4, 5};
    int arraySize = sizeof(myArray) / sizeof(myArray[0]);

    // Display the original array
    printf("Original Array: ");
    int i;
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

    return 0;
}

