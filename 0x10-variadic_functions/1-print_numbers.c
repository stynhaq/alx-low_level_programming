#include "variadic_functions.h"

/**
 * print_numbers - A function that prints numbers, followed by a new line
 *
 * @separator: the string to be printed between numbers
 * @n: is the number of integers to be passed to the function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	va_list arg;

	va_start(arg, n);
	for (x = 0; x < n; x++)
	{
		printf("%d", va_arg(arg, int));

		if (x != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(arg);
}
