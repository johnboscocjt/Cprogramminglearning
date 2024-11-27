#include <stdio.h>

#define MIN_MARK 40 // Define the minimum allowed mark

int main() {
    int numStudents;

    // Get user input for the number of students
    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    // Declare an array to store marks for the specified number of students
    int marks[numStudents];

    // Get user input for marks
    printf("Enter marks for %d students:\n", numStudents);

    int i;
    for (i = 0; i < numStudents; i++) {
        printf("Enter marks for student %d: ", i + 1);
        scanf("%d", &marks[i]);

        // Deduct 7 from each mark
        marks[i] -= 7;

        // Ensure the resulting mark is not less than the minimum allowed mark
        if (marks[i] < MIN_MARK) {
            marks[i] = MIN_MARK;
        }
    }

    // Display the modified marks
    printf("\nModified marks for %d students:\n", numStudents);

    for (i = 0; i < numStudents; i++) {
        printf("Student %d: %d\n", i + 1, marks[i]);
    }

    return 0;
}

