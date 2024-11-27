#include <stdio.h>

int main() {
    // Declare variables to store user input
    char lastName[50];
    int yearOfBirth;

    // Prompt user for last name
    printf("Enter your last name: ");
    scanf("%s", lastName);

    // Prompt user for year of birth
    printf("Enter your year of birth: ");
    scanf("%d", &yearOfBirth);

    // Display user information
    printf("You are %s, born in %d.\n", lastName, yearOfBirth);

    return 0;
}
