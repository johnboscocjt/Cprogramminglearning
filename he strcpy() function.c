#include <stdio.h>
#include <string.h>

int main() {
  
    char original[] = "Hello";
  
    char destination[20]; // Make sure this array is big enough

    strcpy(destination, original);

    printf("Copied string: %s\n", destination);
}
