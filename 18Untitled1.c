#include <stdio.h>

// Function to calculate the area of a circle
float calculateCircleArea(float radius) {
    const float PI = 3.14159;
    float area = PI * radius * radius;
    return area;
}

int main() {
    // Get user input for the radius
    float radius;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Call the function to calculate the area
    float area = calculateCircleArea(radius);

    // Display the result
    printf("The area of the circle with radius %.2f is: %.2f\n", radius, area);

    return 0;
}

