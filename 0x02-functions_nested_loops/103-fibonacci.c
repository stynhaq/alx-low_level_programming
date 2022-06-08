#include <stdio.h>

/**
 * main - print sum of even Fionacci sequence up to 4,000,000
 * Return: 0
 */

int main(void)
{
	int sum_of_even_num = 0;
	int num1 = 1;
	int num2 = 1;
	int sum = 1;

	while (num2 < 4000000)
	{
		sum = num1 + num2;
		mum1 = num2;
		num2 = sum;
		if ((sum <= 4000000) && (sum % 2 == 0))
			sum_of_evens += sum;
	}
	printf("%d\n", sum_of_even_num);

	return (0);
}
