#include <stdio.h>
#include <string.h>

int main() {
    // Declare variables
    char sourceString[100];
    char destinationString[100];
    int var = 5;

    // Prompt user for a string
    printf("Enter a string: ");
    scanf("%s", sourceString);

    // Use strlen to get the length of the string
    int length = strlen(sourceString);

    // Use strcpy to copy the string
    strcpy(destinationString, sourceString);

    // Use var++ to increment a variable
    var++;

    // Display the results
    printf("Length of the string: %d\n", length);
    printf("Copied String: %s\n", destinationString);
    printf("Updated value of var: %d\n", var);

    return 0;
}

