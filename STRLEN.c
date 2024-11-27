#include <stdio.h>
#include <string.h>

int main() {
    // Declare variables
    char inputString[100];

    // Prompt user for a string
    printf("Enter a string: ");
    scanf("%s", inputString);

    // Use strlen to get the length of the string
    int length = strlen(inputString);

    // Display the length of the entered string
    printf("Length of the string: %d\n", length);

    return 0;
}

