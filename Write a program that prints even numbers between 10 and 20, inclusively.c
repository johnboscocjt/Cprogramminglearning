#include <stdio.h>

int main() {
	int i;
    // Loop through numbers from 10 to 20
    for (i = 10; i <= 20; i++) {
        // Check if the number is even
        if (i % 2 == 0) {
            // Print the even number
            printf("%d\n", i);
        }
    }

    return 0;
}

