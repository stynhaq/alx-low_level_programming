 #include <stdio.h>

/**
 * main - to print first 98 fibonacci numbers
 * pointers, array/tables, or structures
 * Return: 0
 */

int main(void)
{
	int count1, count2;
	unsigned long a = 1;
	unsigned long b = 1;
	unsigned long sum = 0;
	long a_head, a_tail, b_head, b_tail, sum_head, sum_tail;

	printf("1");

	for (count1 = 2; count1 < 93; count1++) /* will still print */
	{
		sum = a + b;
		a = b;
		b = sum;
		printf(", %lu", sum);
	}

	a_head = a / 1000000000; /* break larger num into 2 parts */
	a_tail = a % 1000000000;
	b_head = b / 1000000000;
	b_tail = b % 1000000000;

	for (; count1 < 99; count1++)
	{
		count2 = (a_tail + b_tail) / 1000000000;
		sum_tail = (a_tail + b_tail) - (1000000000 * count2);
		sum_head = (a_head + b_head) + count2;

		printf(", %lu%lu", sum_head, sum_tail);

		a_head = b_head;
		a_tail = b_tail;
		b_head = sum_head;
		b_tail = sum_tail;
	}


	printf("\n");

	return (0);
}
