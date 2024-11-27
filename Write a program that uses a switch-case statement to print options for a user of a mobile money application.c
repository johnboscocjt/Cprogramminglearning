#include <stdio.h>

int main() {
    // Declare variable for user choice
    int choice;

    // Display options to the user
    printf("Mobile Money Options:\n");
    printf("1. Checking Balance\n");
    printf("2. Cash Transfer\n");
    printf("3. Paying Bills\n");
    printf("4. Cash Out\n");

    // Prompt user for choice
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    // Use switch-case to handle user's choice
    switch (choice) {
        case 1:
            printf("Checking Balance\n");
            break;
        case 2:
            printf("Cash Transfer\n");
            break;
        case 3:
            printf("Paying Bills\n");
            break;
        case 4:
            printf("Cash Out\n");
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}

