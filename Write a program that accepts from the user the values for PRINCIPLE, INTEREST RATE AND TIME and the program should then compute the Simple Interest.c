#include <stdio.h>

int main() {
    // Declare variables
    float principle, interestRate, time, simpleInterest;

    // Prompt user for principle, interest rate, and time
    printf("Enter the principle amount: ");
    scanf("%f", &principle);

    printf("Enter the interest rate (in percentage): ");
    scanf("%f", &interestRate);

    printf("Enter the time (in years): ");
    scanf("%f", &time);

    // Convert interest rate from percentage to decimal
    interestRate = interestRate / 100;

    // Compute simple interest
    simpleInterest = principle * interestRate * time;

    // Display the result
    printf("Simple Interest: %.2f\n", simpleInterest);

    return 0;
}
