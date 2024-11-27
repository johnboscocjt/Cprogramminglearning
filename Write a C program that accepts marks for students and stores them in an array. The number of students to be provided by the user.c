#include <stdio.h>

int main() {
    int numStudents;
    int i;
    // Accept the number of students from the user
    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    // Check if the number of students is within a valid range
    if (numStudents <= 0) {
        printf("Invalid number of students. Please enter a positive integer.\n");
        return 1; // Exit the program with an error code
    }

    // Declare an array to store marks for the entered number of students
    int marks[numStudents];

    // Accept marks for each student using a loop
    for (i = 0; i < numStudents; i++) {
        printf("Enter marks for student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    // Display the entered marks
    printf("\nMarks entered for %d students are:\n", numStudents);

    for (i = 0; i < numStudents; i++) {
        printf("Student %d: %d\n", i + 1, marks[i]);
    }

    return 0;
}

