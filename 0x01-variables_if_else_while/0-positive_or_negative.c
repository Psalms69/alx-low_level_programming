#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void) /*this runs the main code*/
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n <= 0)
{
if (n == 0)
printf(" %d is zero", n);
else
printf(" %d is negative", n);
}
else
{
printf(" %d is positive", n);
}
return (0);
}
