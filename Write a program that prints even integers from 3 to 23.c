#include <stdio.h>

int main() {
	int i;
    // Loop through numbers from 3 to 23
    for ( i = 3; i <= 23; i++) {
        // Check if the number is even
        if (i % 2 == 0) {
            // Print the even number
            printf("%d\n", i);
        }
    }

    return 0;
}

