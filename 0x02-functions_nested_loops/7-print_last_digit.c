#include "main.h"

/**
 * print_last_digit - print last digit of integer
 * @num: integer argument
 * Return: last digit of number
 */

int print_last_digit(int num)
{
	if (num < 0)
		num *= -1;
	_putchar('0' + (num % 10));

	return (num % 10);
}
