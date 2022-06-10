#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal
 * @n: the integer
 * Return: 0 or 1
 */

void print_diagonal(int n)
{
	int row, column;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 1; row <= n; row++)
		{
			for (column = 1; column <= n; column++)
			{
				if (column < row)
				{
					_putchar(' ');
				}
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
