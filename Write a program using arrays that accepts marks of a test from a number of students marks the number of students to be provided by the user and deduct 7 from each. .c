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

    // Declare an array to store original marks and modified marks
    int originalMarks[numStudents];
    int modifiedMarks[numStudents];

    // Accept original marks for each student
    for (i = 0; i < numStudents; i++) {
        printf("Enter marks for student %d: ", i + 1);
        scanf("%d", &originalMarks[i]);

        // Deduct 7 from each mark and set to 40 if less than 40
        modifiedMarks[i] = (originalMarks[i] - 7 < 40) ? 40 : originalMarks[i] - 7;
    }

    // Display the original and modified marks
    printf("\nOriginal and Modified Marks for %d students are:\n", numStudents);

    for (i = 0; i < numStudents; i++) {
        printf("Student %d: Original - %d, Modified - %d\n", i + 1, originalMarks[i], modifiedMarks[i]);
    }

    return 0;
}

