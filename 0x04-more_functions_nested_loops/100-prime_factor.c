#include "main.h"

/**
 * main - function that prints prime factors
 * Return: 0
 */

int main(void)
{
	long int a, b, n;

	n = -1;
	a = 612852475143;

	while (a % 2 == 0)
	{
		n = 2;
		a = a / 2;
	}

	for (b = 3; b <= a / 2; b = b + 2)
	{
		while (a % b == 0)
		{
			n = b;
			a = a / b;
		}
	}

	if (a > 2)

		n = a;

	printf("%ld\n", n);
	return (0);
}
