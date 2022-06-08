#include "main.h"

/**
 * print_last_digit - print last digit of integer
 * @num: the integer number
 * Return: last digit of number
 */

int print_last_digit(int num)
{
	int n;

	if (num >= 0)
		n = num % 10;
	else
		n = (num % 10) * -1;

	_putchar('0' + n);

	return (n);
}
