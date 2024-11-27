#include <stdio.h>
#include <math.h>

int main() {
    // Declare variables
    float radius, area, circumference;

    // Prompt user for the radius
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Compute area and circumference
    area = M_PI * radius * radius;
    circumference = 2 * M_PI * radius;

    // Display results
    printf("Area of the circle: %.2f\n", area);
    printf("Circumference of the circle: %.2f\n", circumference);

    return 0;
}
