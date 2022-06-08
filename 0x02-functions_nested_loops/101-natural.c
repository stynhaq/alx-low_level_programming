#include<stdio.h>

/**
 * main - main function to compute multiples of 3 and 5
 *
 * Return: returns 0, no error
 */
int main(void)
{
	int num = 0;
	int sum = 0;

	while (num < 1024)
	{
		if (num % 3 == 0 || num % 5 == 0)
		{
			sum += num;
		}
		num++;
	}
	printf("%i\n", sum);

	return (0);
}
