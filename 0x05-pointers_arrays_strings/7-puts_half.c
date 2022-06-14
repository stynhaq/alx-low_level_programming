#include "main.h"

/**
 * _strlen - a function that returns the length of a string
 * @s: - the input string
 * Return: the length of string
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}

/**
 * puts_half - a function that prints half of a string, followed by a new line
 * @str: the string to print
 */

void puts_half(char *str)
{
	int half;
	int len = _strlen(str);

	if (len % 2 != 0)
		half = (len / 2) + 1;
	else
		half = (len / 2);

	while (half < len)
	{
		_putchar(*(str + half));
		half++;
	}
	_putchar('\n');
}
