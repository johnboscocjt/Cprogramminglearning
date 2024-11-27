#include <stdio.h>

int main() {
    // Declare variables
    float salary, tax;

    // Prompt user for salary
    printf("Enter your salary: ");
    scanf("%f", &salary);

    // Calculate tax based on salary ranges
    if (salary <= 170000) {
        tax = 0.0;
    } else if (salary <= 360000) {
        tax = 0.11 * (salary - 170000);
    } else if (salary <= 540000) {
        tax = 0.11 * (360000 - 170000) + 0.20 * (salary - 360000);
    } else if (salary <= 720000) {
        tax = 0.11 * (360000 - 170000) + 0.20 * (540000 - 360000) + 0.25 * (salary - 540000);
    } else {
        tax = 0.11 * (360000 - 170000) + 0.20 * (540000 - 360000) + 0.25 * (720000 - 540000) + 0.30 * (salary - 720000);
    }

    // Display the calculated tax
    printf("Tax: %.2f\n", tax);

    return 0;
}

