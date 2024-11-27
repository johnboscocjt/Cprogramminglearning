#include <stdio.h>
#include <string.h>

int main() {
    // Declare variables
    char password[100];

    // Prompt user for a password
    printf("Enter your password: ");
    scanf("%s", password);

    // Check if the password is more than 7 characters long
    if (strlen(password) > 7) {
        printf("Sufficient\n");
    } else {
        printf("Insufficient\n");
    }

    return 0;
}

