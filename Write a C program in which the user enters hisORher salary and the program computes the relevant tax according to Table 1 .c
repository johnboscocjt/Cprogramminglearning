#include <stdio.h>

int main() {
    // Declare variables
    float salary, taxPercentage;

    // Prompt user for salary
    printf("Enter your salary: ");
    scanf("%f", &salary);

    // Calculate tax percentage based on salary ranges
    if (salary <= 170000) {
        taxPercentage = 0.0;
    } else if (salary <= 360000) {
        taxPercentage = 11.0;
    } else if (salary <= 540000) {
        taxPercentage = 20.0;
    } else if (salary <= 720000) {
        taxPercentage = 25.0;
    } else {
        taxPercentage = 30.0;
    }

    // Display the calculated tax percentage
    printf("Tax Percentage: %.2f%%\n", taxPercentage);

    return 0;
}

