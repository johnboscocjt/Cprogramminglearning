#include <stdio.h>

// Function to swap two numbers using pointers
void swapNumbers(int *ptr1, int *ptr2) {
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main() {
    int num1, num2;

    // Get user input for num1 and num2
    printf("Enter num1: ");
    scanf("%d", &num1);

    printf("Enter num2: ");
    scanf("%d", &num2);

    // Display the original values
    printf("\nOriginal values:\n");
    printf("num1: %d\n", num1);
    printf("num2: %d\n", num2);

    // Call the function to swap num1 and num2 using pointers
    swapNumbers(&num1, &num2);

    // Display the swapped values
    printf("\nSwapped values:\n");
    printf("num1: %d\n", num1);
    printf("num2: %d\n", num2);

    return 0;
}

