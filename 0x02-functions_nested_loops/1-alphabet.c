#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase.
 * Description: a function that prints the alphabet,
 * in lowecase followed by a new line
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	int ch = 'a';
	while (ch <= 'z')
	{
		_putchar(ch);
	}
	_putchar('\n');
}
