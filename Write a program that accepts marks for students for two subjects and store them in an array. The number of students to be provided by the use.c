#include <stdio.h>

int main() {
    int numStudents;
    int i;
    int j;
    // Accept the number of students from the user
    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    // Check if the number of students is within a valid range
    if (numStudents <= 0) {
        printf("Invalid number of students. Please enter a positive integer.\n");
        return 1; // Exit the program with an error code
    }

    // Declare a 2D array to store marks for two subjects for the entered number of students
    int marks[numStudents][2];

    // Accept marks for each student and each subject using nested loops
    for (i = 0; i < numStudents; i++) {
        for (j = 0; j < 2; j++) {
            printf("Enter marks for student %d, subject %d: ", i + 1, j + 1);
            scanf("%d", &marks[i][j]);
        }
    }

    // Display the entered marks
    printf("\nMarks entered for %d students are:\n", numStudents);

    for (i = 0; i < numStudents; i++) {
        printf("Student %d: Subject 1 - %d, Subject 2 - %d\n", i + 1, marks[i][0], marks[i][1]);
    }

    return 0;
}

