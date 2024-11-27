#include <stdio.h>
#include <stdlib.h> // Include the necessary header for dynamic memory allocation

int main() {
    int numStudents;

    // Get user input for the number of students
    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    // Dynamically allocate memory for the array based on the number of students
    int *marks = (int *)malloc(numStudents * sizeof(int));

    if (marks == NULL) {
        printf("Memory allocation failed. Exiting...\n");
        return 1; // Return an error code
    }

    // Get user input for marks
    printf("Enter marks for %d students:\n", numStudents);

    int i;
    for (i = 0; i < numStudents; i++) {
        printf("Enter marks for student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    // Display the entered marks
    printf("\nEntered marks for %d students:\n", numStudents);

    for (i = 0; i < numStudents; i++) {
        printf("Student %d: %d\n", i + 1, marks[i]);
    }

    // Free dynamically allocated memory
    free(marks);

    return 0;
}

