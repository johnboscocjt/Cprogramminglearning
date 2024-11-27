#include <stdio.h>

// Function to subtract 7 from each element of the array
void subtract7FromArray(int *arr, int size) {
    int i;
	for (i = 0; i < size; i++) {
        arr[i] -= 7;    //x -= 5; It is equivalent to writing x = x - 5;
    }
}

int main() {
    // Example array
    int myArray[] = {10, 20, 30, 40, 50};
    int arraySize = sizeof(myArray) / sizeof(myArray[0]);

    // Display the original array
    printf("Original Array: ");
    int i;
    for (i = 0; i < arraySize; i++) {
        printf("%d ", myArray[i]);
    }
    printf("\n");

    // Call the function to subtract 7 from each element
    subtract7FromArray(myArray, arraySize);

    // Display the modified array
    printf("Modified Array: ");
    for (i = 0; i < arraySize; i++) {
        printf("%d ", myArray[i]);
    }
    printf("\n");

    return 0;
}

