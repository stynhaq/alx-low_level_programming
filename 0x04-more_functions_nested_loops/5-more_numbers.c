#include "main.h"
#include <ctype.h>

/**
 * more_numbers - unction that prints 10 times the numbers, from 0 to 14
 *
 * Return: 0 or 1
 */

void more_numbers(void)
{
	int n, more;

	for (more = 0; more <= 9; more++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n >= 10)
			{
				_putchar((n / 10) + '0');
			}
			_putchar((n % 10) + '0');
		}
		_putchar('\n');
	}
}
