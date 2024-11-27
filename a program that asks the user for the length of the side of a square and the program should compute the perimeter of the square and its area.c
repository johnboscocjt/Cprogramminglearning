int main() {
    // Declare variables
    float sideLength, perimeter, area;

    // Prompt user for the length of the side
    printf("Enter the length of the side of the square: ");
    scanf("%f", &sideLength);

    // Compute perimeter and area
    perimeter = 4 * sideLength;
    area = sideLength * sideLength;

    // Display results
    printf("Perimeter of the square: %.2f\n", perimeter);
    printf("Area of the square: %.2f\n", area);

    return 0;
}
