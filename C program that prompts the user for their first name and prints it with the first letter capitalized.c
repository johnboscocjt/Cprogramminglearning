#include <stdio.h>
#include <ctype.h>

int main() {
    // Declare variables
    char firstName[100];

    // Prompt user for first name
    printf("Enter your first name: ");
    scanf("%s", firstName);

    // Capitalize the first letter of the first name
    if (firstName[0] >= 'a' && firstName[0] <= 'z') {
        firstName[0] = toupper(firstName[0]);
    }

    // Display the first name with the first letter capitalized
    printf("Your first name with the first letter capitalized: %s\n", firstName);

    return 0;
}

