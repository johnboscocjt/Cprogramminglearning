#include <stdio.h>
#include <string.h>

int main() {
    // Declare variables
    char surname[100];

    // Prompt user for surname
    printf("Enter your surname: ");
    scanf("%s", surname);

    // Use strlen to get the length of the surname
    int length = strlen(surname);

    // Display the length of the surname
    printf("Your surname is %d characters long.\n", length);

    return 0;
}

