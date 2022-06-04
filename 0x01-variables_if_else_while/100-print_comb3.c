#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int ch, n;

	for (ch = 48; ch < 58; ch++)
	{
		for (n = 48; n < 58; n++)
		{
			if (ch == n || n <= ch)
			{
			}
			else
			{
				putchar(ch);
				putchar(n);
				if (ch == 56 && n == 57)
				{
				}
				else
				{
					putchar(44);
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
