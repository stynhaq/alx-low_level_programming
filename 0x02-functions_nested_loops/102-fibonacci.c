#include <stdio.h>

/**
 * main - function prints the first 50 Fibonacci numbers
 * Return: 0
 */

int main(void)
{
	int count;
	int i = 50;
	long a = 1;
	long b = 2;

	for (count = 1; count <= (i / 2); count++)
	{
		printf("%lu, %lu,  ", a, b);
		a += b;
		b += a;
	}
	if (i % 2 == 1)
		printf("%lu", a);

	printf("\n");

	return (0);
}
