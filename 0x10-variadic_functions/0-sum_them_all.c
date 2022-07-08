#include "variadic_functions.h"

/**
 * sum_them_all - A function that sums all its parameters
 *
 * @n: the int parameter
 *
 * Return: 0 if n == 0
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int x;
	va_list li;
	int sum;

	va_start(li, n);
	for (x = 0, sum = 0; x < n; x++)
		sum += va_arg(li, int);
	va_end(li);

	return (sum);
}
