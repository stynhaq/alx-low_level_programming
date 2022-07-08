#include "variadic_functions.h"

/**
 * print_strings - A function that prints strings , followed by a new line
 *
 * @separator: the  string to be printed between the strings
 * @n: the number of strings passed to the function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	va_list ap;
	char *django;

	va_start(ap, n);

	for (x = 0; x < n; x++)
	{
		django = va_arg(ap, char*);
		if (django == NULL)
			printf("(nil)");
		else
			printf("%s", django);
		if (x != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
