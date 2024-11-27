#include <stdio.h>

#include <string.h>

main(){

char username[] = "mmahundi";

int count = strlen (username);

//try yours with sizeof

if (count>=7)

printf ("%d", count+3);

else

printf ("%d", count-3);

}
