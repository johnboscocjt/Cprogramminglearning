#include <stdio.h>
#include <string.h>

int main() {

  char word1[] = "bananas";
  char word2[] = "apples";

  int result = strcmp(word1, word2);

  printf("Result: %i\n", result); // Result: 1

}
