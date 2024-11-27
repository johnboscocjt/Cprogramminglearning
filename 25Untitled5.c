#include <stdio.h>

int main() {
    int numStudents;

    // Get user input for the number of students
    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    // Declare a two-dimensional array to store marks for two subjects for each student
    int marks[numStudents][2];

    // Get user input for marks
    printf("Enter marks for %d students for two subjects:\n", numStudents);

    int i;
    for (i = 0; i < numStudents; i++) {
        printf("Enter marks for student %d (Subject 1): ", i + 1);
        scanf("%d", &marks[i][0]);

        printf("Enter marks for student %d (Subject 2): ", i + 1);
        scanf("%d", &marks[i][1]);
    }

    // Display the entered marks
    printf("\nEntered marks for %d students for two subjects:\n", numStudents);

    for (i = 0; i < numStudents; i++) {
        printf("Student %d - Subject 1: %d, Subject 2: %d\n", i + 1, marks[i][0], marks[i][1]);
    }

    return 0;
}

