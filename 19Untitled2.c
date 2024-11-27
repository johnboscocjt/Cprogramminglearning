#include <stdio.h>

// Function to check if the age is beyond the range [0, 100]
int checkAgeRange(int age) {
    if (age < 0 || age > 100) {
        return 1;  // Age is beyond the range
    } else {
        return 0;  // Age is within the range
    }
}

int main() {
    // Get user input for the age
    int age;
    printf("Enter the age: ");
    scanf("%d", &age);

    // Call the function to check the age range
    int isBeyondRange = checkAgeRange(age);

    // Display the result
    if (isBeyondRange) {
        printf("The age is beyond the range [0, 100].\n");
    } else {
        printf("The age is within the range [0, 100].\n");
    }

    return 0;
}

