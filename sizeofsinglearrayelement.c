#include <stdio.h>

int main() {
    
    int grades[] = {50, 75, 100, 67, 90};
    
    // calculate the size of a single array element
    int element_size = sizeof(grades[0]);
    
    printf("Size of a single element: %i bytes\n", element_size);

}
