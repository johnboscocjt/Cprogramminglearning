#include <stdio.h>

int main() {

    int grades[] = {50, 75, 100, 67, 90};
    int i;
    
    int length = sizeof(grades) / sizeof(grades[0]);

    for (i = 0; i < length; i++) {
        printf("Element at index %i: %i\n", i, grades[i]);
    }

}
