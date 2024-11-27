#include <stdio.h>

#define MAX_STUDENTS 10 // Define a maximum number of students
//If you don't want to use malloc for dynamic memory allocation, you can use a fixed-size array

int main() {
    int numStudents;

    // Get user input for the number of students (limited to MAX_STUDENTS)
    printf("Enter the number of students (up to %d): ", MAX_STUDENTS);
    scanf("%d", &numStudents);

    // Ensure the number of students does not exceed the maximum limit
    if (numStudents > MAX_STUDENTS || numStudents <= 0) {
        printf("Invalid number of students. Exiting...\n");
        return 1; // Return an error code
    }

    // Declare an array to store marks for the specified number of students
    int marks[MAX_STUDENTS];

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

    return 0;
}

