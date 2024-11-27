#include <stdio.h>

int main(void) {

    // variable age
   int age;

   // prompt user to enter their age
   printf("Please enter your age: ");

   // store user's answer in the variable
   scanf("%i", &age);

    // check if age is less than 18
    // if it is, then and only then, print a message to the console

   if (age < 18) {
       printf("You need to be over 18 years old to continue\\n");
   }
}
