#include <stdio.h>

int main(void) {
   int age;

   printf("Please enter your age: ");

   scanf("%i", &age);

 
    // if the condition in the parentheses is true the code inside the curly braces will execute
    // otherwise it is skipped
    // and the code in the else block will execute
    
   if (age < 18) {
       printf("You need to be over 18 years old to continue\n");
   } else {
      printf("You are over 18 so you can continue \n");
  }
  
   }
