#include <stdio.h>

// Define the structure
struct Employee {
    char name[50];
    int age;
    float salary;
};

int main() {
    // Declare an array of the structure type with 5 elements
    struct Employee employees[5];

    // Accept values for the array
    printf("Enter details for 5 employees:\n");

    int i;
    for (i = 0; i < 5; i++) {
        printf("Employee %d:\n", i + 1);

        // Accept values for each member of the structure
        printf("Name: ");
        scanf("%s", employees[i].name);

        printf("Age: ");
        scanf("%d", &employees[i].age);

        printf("Salary: ");
        scanf("%f", &employees[i].salary);

        printf("\n");
    }

    // Display the entered values
    printf("Entered Employee Details:\n");

    for (i = 0; i < 5; i++) {
        printf("Employee %d:\n", i + 1);
        printf("Name: %s\n", employees[i].name);
        printf("Age: %d\n", employees[i].age);
        printf("Salary: %.2f\n\n", employees[i].salary);
    }

    return 0;
}

