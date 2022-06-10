#include "main.h"

/**
 * print_square -  function that prints a square, followed by a new line
 *
 * @size: size of the square
 * Return: 0
 */

void print_square(int size)
{
	int row, column;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (column = 0; column < size; column++)
		{
			for (row = 0; row < size; row++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
