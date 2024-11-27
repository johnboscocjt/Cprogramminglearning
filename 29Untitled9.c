#include<stdio.h>

int main() {
    int k;
    float thearr[] = {2.5, 5, 6.7, 10, 13.3, 25, 0};
    float *ptr = thearr; // Initialize pointer to the start of the array

    // Print the contents of the array using pointers
    printf("Array Contents:\n");

    for (k = 0; k < sizeof(thearr) / sizeof(thearr[0]); k++) {
        printf("%.2f ", *ptr); // Print the value at the current pointer position
        ptr++; // Move the pointer to the next element
    }

    printf("\n");

    return 0;
}

