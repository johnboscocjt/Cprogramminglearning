#include <stdio.h>

int main() {
    // Declare variable
    int age;

    // Prompt user for the age
    printf("Enter the age of the child: ");
    scanf("%d", &age);

    // Check if the age is within the valid range using relational operators
    if (age < 0 || age > 10) {
        printf("WRONG ENTRY\n");
    } else {
        printf("VALID AGE\n");
    }

    return 0;
}
