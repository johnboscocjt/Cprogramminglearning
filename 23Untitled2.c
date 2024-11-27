#include <stdio.h>

int main() {
    // Declare an array to store marks for 5 students
    int marks[5];

    // Get user input for marks
    printf("Enter marks for 5 students:\n");
    int i;
    for (i = 0; i < 5; i++) {
        printf("Enter marks for student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    // Display the entered marks
    printf("\nEntered marks for 5 students:\n");

    for (i = 0; i < 5; i++) {
        printf("Student %d: %d\n", i + 1, marks[i]);
    }

    return 0;
}

