#include <stdio.h>

int main() {
    
    int grades[] = {50, 75, 100, 67, 90};
    
     int array_size = sizeof(grades);
     
     int element_size = sizeof(grades[0]);
    
     // calculate the length of the array
     int length = array_size / element_size;

    printf("Length of the array: %i elements\n", length);

}
