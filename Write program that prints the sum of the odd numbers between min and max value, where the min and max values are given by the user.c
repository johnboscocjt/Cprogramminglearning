#include <stdio.h>

int main() {
    int min, max;

    // Prompt user for minimum and maximum values
    printf("Enter the minimum value: ");
    scanf("%d", &min);

    printf("Enter the maximum value: ");
    scanf("%d", &max);

    // Validate that min is less than or equal to max
    if (min > max) {
        printf("Error: Minimum value should be less than or equal to the maximum value.\n");
        return 1; // Return with an error code
    }

    int sum = 0;


    int i;
    // Loop through numbers from min to max
    for (i = min; i <= max; i++) {
        // Check if the number is odd
        if (i % 2 != 0) {
            // Add the odd number to the sum
            sum += i;
        }
    }

    // Print the sum of odd numbers
    printf("Sum of odd numbers between %d and %d: %d\n", min, max, sum);

    return 0;
}

