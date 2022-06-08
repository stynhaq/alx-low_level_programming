#include "main.h"

/**
 * print_times_table - prints times table up to the number n
 * @n: upper limit integer to print
 */

void print_times_table(int n)
{
	int a;
	int b;
	int times;

	if (n >= 0 && n <= 15)
	{
		for (a = 0; a <= n; a++)
		{
			for (b = 0; b <= n; b++)
			{
				times = (a * b);
				if (b == 0)
					_putchar('0' + times);
				else
				{
					_putchar(',');
					_putchar(' ');
					if (times <= 9)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar('0' + times);
					}
					else if (times > 9 && times < 100)
					{
						_putchar(' ');
						_putchar('0' + (times / 10));
						_putchar('0' + (times % 10));
					}
					else if (times >= 100)
					{
						_putchar('0' + (times / 100));
						_putchar('0' + ((times / 10) % 10));
						_putchar('0' + (times % 10));
					}
				}
			}
			_putchar('\n');
		}
	}
}
