#include <stdio.h>

int main() {
    int min, max;
    char choice;

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

    // Prompt user for choice (odd or even)
    printf("Do you want the sum of odd (O) or even (E) numbers? ");
    scanf(" %c", &choice);



    int sum = 0;


    int i;
    // Loop through numbers from min to max
    for (i = min; i <= max; i++) {
        // Check if the number is odd or even based on user's choice
        if ((choice == 'O' || choice == 'o') && i % 2 != 0) {
            // Add the odd number to the sum
            sum += i;
        } else if ((choice == 'E' || choice == 'e') && i % 2 == 0) {
            // Add the even number to the sum
            sum += i;
        }
    }

    // Print the sum based on user's choice
    if (choice == 'O' || choice == 'o') {
        printf("Sum of odd numbers between %d and %d: %d\n", min, max, sum);
    } else if (choice == 'E' || choice == 'e') {
        printf("Sum of even numbers between %d and %d: %d\n", min, max, sum);
    } else {
        printf("Invalid choice. Please enter 'O' or 'E' for odd or even, respectively.\n");
    }

    return 0;
}

