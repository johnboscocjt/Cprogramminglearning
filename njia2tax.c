#include <stdio.h>

int main() {
    // Declare variables
    float salary, taxPercentage;

    // Prompt user for salary
    printf("Enter your salary: ");
    scanf("%f", &salary);

    // Calculate tax percentage based on salary ranges
    if (salary <= 170000) {
        printf("your tax percentage is 0%%\n");
        printf("your tax amount is %f", salary*0);
    } else if (salary <= 360000) {
        printf("your tax percentage is 11%%\n", salary);
        printf("your tax amount is %f", salary*0.11);
    } else if (salary <= 540000) {
        printf("your tax percentage is 20%%\n", salary);
        printf("your tax amount is %f", salary*0.2);
    } else if (salary <= 720000) {
        printf("your tax percentage is 25%%\n", salary);
        printf("your tax amount is %f", salary*0.25);
    } else {
        printf("your tax percentage is 30%%\n", salary);
        printf("your tax amount is %f", salary*0.3);
    }

    return 0;
}
