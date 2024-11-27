#include <stdio.h>

int main() {
    int num1, num2;
    int divisionResult, multiplicationResult;

    // Prompt user for input values
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Division operation
    if (num2 != 0) {
        divisionResult = num1 / num2;
        printf("Result of division: %d\n", divisionResult);
    } else {
        printf("Error: Division by zero is not allowed.\n");
    }

    // Multiplication operation
    multiplicationResult = num1 * num2;
    printf("Result of multiplication: %d\n", multiplicationResult);

    return 0;
}

