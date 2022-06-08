#include "main.h"
#include<stdio.h>

/**
 * main - entry point
 *
 * Return: 0
 */

int main(void)
{
	int x, y;
	long f1, f2, next;

	f1 = 1;
	f2 = 2;
	y = 50;

	for (x = 0; x < y; x++)
	{
		if (x == 49)
		{
			printf("%lu", f1);
		}
		else
		{
			printf("%lu, ", f1);
			next = f1 + f2;
			f1 = f2;
			f2 = next;
		}
	}

	printf("\n");
	return (0);
}
