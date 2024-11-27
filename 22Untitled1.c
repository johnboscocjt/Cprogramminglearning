#include <stdio.h>

// Function to perform operations on two floating-point numbers based on the given option
float performOperation(float num1, float num2, int option) {
    float result;

    if (option == 1) {
        // Return the product of the floating-point numbers for option 1
        result = num1 * num2;
    } else if (option == 2) {
        // Return the sum of the floating-point numbers for option 2
        result = num1 + num2;
    } else {
        // Handle invalid option
        printf("Invalid option. Please choose 1 for product or 2 for sum.\n");
        result = 0;  // Default to 0 for an invalid option
    }

    return result;
}

int main() {
    // Get user input for two floating-point numbers and the operation option
    float number1, number2;
    int option;

    printf("Enter the first floating-point number: ");
    scanf("%f", &number1);

    printf("Enter the second floating-point number: ");
    scanf("%f", &number2);

    printf("Enter the option (1 for product, 2 for sum): ");
    scanf("%d", &option);

    // Call the function to perform the operation
    float result = performOperation(number1, number2, option);

    // Display the result
    if (option == 1 || option == 2) {
        printf("Result: %.2f\n", result);
    }

    return 0;
}

