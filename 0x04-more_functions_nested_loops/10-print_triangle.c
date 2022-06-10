#include "main.h"

/**
 * print_triangle - function that prints a triangle
 *
 * @size: size of the triangle
 * Return: 0
 */

void print_triangle(int size)
{
		int row, column;

		if (size <= 0)
		{
			_putchar('\n');
		}
		else
		{
			for (row = 0; row < size; row++)
			{
				for (column = (size - 1); column >= 0; column--)
				{
					if (column <= row)
					{
						_putchar('#');
					}
					else
					{
						_putchar(' ');
					}
				}
				_putchar('\n');
			}
		}
}
