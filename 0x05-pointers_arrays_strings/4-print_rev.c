#include "main.h"

/**
 * print_rev - function that prints a string, in reverse followed by a new line
 * @s: input string to be reversed
 */

void print_rev(char *s)
{

	int len = 0;
	int i;

	while (*s != '\0')
	{
		len++;
		++s;
	}

	s--;

	/* print string reversed */
	for (i = len; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
