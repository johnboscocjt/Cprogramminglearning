#include <stdio.h>
#include <ctype.h>
#include <string.h>
main(){

char username[] = "mmahundi";
int count = 0;

if (( strlen (username)>=7) && islower (username[0]))

count = count + strlen (username);

else

count = strlen(username) - 5;
printf ("%d", count);

}

