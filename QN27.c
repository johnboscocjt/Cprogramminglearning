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

    // Declare an array to store marks for each student
    int marks[numStudents];

    // Accept marks for each student
    for (i = 0; i < numStudents; i++) {
        printf("Enter marks for student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    // Calculate the mean mark
    int sum = 0;
    for (i = 0; i < numStudents; i++) {
        sum += marks[i];
    }
    double mean = (double)sum / numStudents;

    // Calculate the average deviation from the mean
    double deviationSum = 0;
    for (i = 0; i < numStudents; i++) {
        deviationSum += (double)(marks[i] - mean);
    }
    double averageDeviation = deviationSum / numStudents;

    // Display the mean mark and average deviation
    printf("\nMean Mark: %.2lf\n", mean);
    printf("Average Deviation from Mean: %.2lf\n", averageDeviation);

    return 0;
}

