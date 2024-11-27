#include <stdio.h>

int main() {
    // Declare an array to store marks for 5 students
    int marks[5];
    int i;
    // Accept marks for each student using a loop
    for (i = 0; i < 5; i++) {
        printf("Enter marks for student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    // Display the entered marks
    printf("\nMarks entered for 5 students are:\n");

    for (i = 0; i < 5; i++) {
        printf("Student %d: %d\n", i + 1, marks[i]);
    }

    return 0;
}

