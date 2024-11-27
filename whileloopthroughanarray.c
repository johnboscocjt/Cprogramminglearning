#include <stdio.h>

int main() {

    int grades[] = {50, 75, 100, 67, 90};
    
    int i = 0;
    
    while (i < 5) {
    
        printf("Element at index %i: %i\n", i, grades[i]);
        i++;
    }
}
