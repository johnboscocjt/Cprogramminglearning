#include<stdio.h>
int main(){

int X,Y ,greater;

printf("\n Enter the value of X and Y ");

scanf ("%d %d", &X, &Y);

if(X > Y ) /*for a single statement, you do not need to start with a bracket {*/

greater = X;

else

greater = Y;

printf ("Between %d and %d, greater one is %d", X,Y,greater);

}

