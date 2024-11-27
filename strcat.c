#include <stdio.h>
#include <string.h>

int main(void) {
    
  char greeting[50] = "Hello, ";
  
  char name[] = "Dionysia";

  strcat(greeting, name);

  printf("Message: %s\n", greeting);
  
}
