#include <stdio.h>

int main(void) {
   int age;

   printf("Please enter your age: ");

   scanf("%i", &age);

   if (age < 18) {
       printf("You need to be over 18 years old to continue\n");
   }  else if (age < 21) {
       printf("You need to be over 21\n");
   } else {
      printf("You are over 18 and older than 21 so you can continue \n");
  }
  
  }
