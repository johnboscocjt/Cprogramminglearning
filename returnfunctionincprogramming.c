/*
In C programming, the return statement is used to exit a function and return a value to the calling code. The primary functions of the return statement include:

Exiting a Function:

When the return statement is encountered in a function, it immediately exits the function, and control is returned to the calling code.
Returning a Value:

The return statement can be used to send a value back to the calling code. This value represents the result of the function's computation and can be used by the calling code.
Specifying the Return Type:

The data type of the value being returned must match the return type specified in the function declaration. For example, if a function is declared to return an integer (int), the return statement should provide an integer value.
Ending the Execution of a Program:

In the main function, which is the entry point of a C program, the return statement can be used to indicate the termination status of the program. A return value of 0 conventionally indicates successful execution, while a non-zero value may indicate an error or abnormal termination.
*/
#include <stdio.h>

// Function to add two integers
int add(int a, int b) {
    int sum = a + b;
    return sum; // Return the sum to the calling code
}

int main() {
    int result;

    // Call the add function and store the result
    result = add(3, 4);

    // Print the result
    printf("The sum is: %d\n", result);

    return 0; // Indicates successful execution to the operating system
}

