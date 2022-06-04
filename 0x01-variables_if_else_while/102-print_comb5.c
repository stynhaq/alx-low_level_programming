#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0.
 */
int main(void)
{
	int ch, n;

	for (ch = 0; ch <= 98; ch++)
	{
		for (n = ch + 1; n <= 99; n++)
		{
			putchar((ch / 10) + '0');
			putchar((ch % 10) + '0');
			putchar(' ');
			putchar((n / 10) + '0');
			putchar((n % 10) + '0');

			if (ch == 98 && n == 99)
				continue;

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
