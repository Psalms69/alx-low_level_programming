#include "main.h"
/**
 * _islower - Entry point
 * Description: checks is a character is lowercase
 * @c: the integer value it receives
 * Return: 1 if true. 0 if false.
 */
int _islower(int c)
{
int i = 'a';
for (i = 'a'; i <= 'z'; i++)
if (c == i)
{
return (1);
}
else
{
return (0);
}
}
int main ()
{
int _islower(int c);
return 0;
}


