#include <stdio.h>
#include <math.h> // Include the necessary header for math functions

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
    }

    // Compute the mean mark
    int sum = 0;
    for (i = 0; i < numStudents; i++) {
        sum += marks[i];
    }
    float mean = (float) sum / numStudents;

    // Compute the average deviation of marks from the mean
    float deviationSum = 0;
    for (i = 0; i < numStudents; i++) {
        deviationSum += fabs(mean - marks[i]);
    }
    float averageDeviation = deviationSum / numStudents;

    // Display the results
    printf("\nMean Mark: %.2f\n", mean);
    printf("Average Deviation from Mean: %.2f\n", averageDeviation);

    return 0;
}

