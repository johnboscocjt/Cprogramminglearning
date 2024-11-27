#include <stdio.h>
#include <string.h>

int main() {
    // Declare variables
    char sourceString[100];
    char destinationString[100];

    // Prompt user for a string
    printf("Enter a string: ");
    scanf("%s", sourceString);

    // Use strcpy to copy the string
    strcpy(destinationString, sourceString);

    // Display the copied string
    printf("Copied String: %s\n", destinationString);
//The program then uses the strcpy function from the <string.h> header to copy the content of the source string to the destination string.
    return 0;
}

