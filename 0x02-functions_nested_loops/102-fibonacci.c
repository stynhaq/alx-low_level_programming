#include<stdio.h>

/**
 * main - entry point
 *
 * Return: 0
 */

int main(void)
{
	int x, y;
	long count1, count2, count;

	count1 = 1;
	count2 = 2;
	y = 50;

	for (x = 0; x < y; x++)
	{
		if (x == 49)
		{
			printf("%lu", count1);
		}
		else
		{
			printf("%lu, ", count1);
			count = count1 + count2;
			count1 = count2;
			count2 = count;
		}
	}

	printf("\n");
	return (0);
}
