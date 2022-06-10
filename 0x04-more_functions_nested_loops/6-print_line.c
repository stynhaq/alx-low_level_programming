#include "main.h"
#include <ctype.h>

/**
 * print_line - function that draws a straight line in the terminal
 *
 * @n: integer for the line
 * Return: 0
 */

void print_line(int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		_putchar(95);
	}
	_putchar('\n');
}
