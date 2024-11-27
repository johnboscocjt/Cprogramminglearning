#include<stdio.h>

int main() {
    int k;
    float multiarr[7];
    float thearr[] = {2.5, 5, 6.7, 10, 13.3, 25, 0};
    float *thearrPtr = thearr; // Initialize pointer to the start of thearr
    float *multiarrPtr = multiarr; // Initialize pointer to the start of multiarr

    // Multiply each element in thearr by 3 and populate multiarr using pointers
    for (k = 0; k < sizeof(thearr) / sizeof(thearr[0]); k++) {
        *multiarrPtr = *thearrPtr * 3; // Multiply the value at current pointer position by 3
        thearrPtr++; // Move thearr pointer to the next element
        multiarrPtr++; // Move multiarr pointer to the next element
    }

    // Print the contents of the multiarr array
    printf("Multiplied Array Contents:\n");

    for (k = 0; k < sizeof(multiarr) / sizeof(multiarr[0]); k++) {
        printf("%.2f ", multiarr[k]);
    }

    printf("\n");

    return 0;
}

