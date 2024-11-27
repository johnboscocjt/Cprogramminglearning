#include <stdio.h>

int main() {
    char operation;
    double num1, num2, result;

    // Prompt user for input values
    printf("Enter the first number: ");
    scanf("%lf", &num1);

    printf("Enter the second number: ");
    scanf("%lf", &num2);

    // Prompt user for the operation
    printf("Enter the operation (+, -, *, /): ");
    scanf(" %c", &operation);

    // Perform the operation based on user input
    if (operation == '+') {
        result = num1 + num2;
        printf("Result: %.2lf\n", result);
    } else if (operation == '-') {
        result = num1 - num2;
        printf("Result: %.2lf\n", result);
    } else if (operation == '*') {
        result = num1 * num2;
        printf("Result: %.2lf\n", result);
    } else if (operation == '/') {
        // Check for division by zero
        if (num2 != 0) {
            result = num1 / num2;
            printf("Result: %.2lf\n", result);
        } else {
            printf("Error: Division by zero is not allowed.\n");
        }
    } else {
        printf("Error: Invalid operation. Please enter +, -, *, or /.\n");
    }

    return 0;
}

