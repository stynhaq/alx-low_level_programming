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
 * puts2 - a function that prints every other character of a string
 * starting with the first character, followed by a new line.
 * @str: - the string to print
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0' && i < _strlen(str); i += 2)
		_putchar(str[i]);

	_putchar('\n');
}
