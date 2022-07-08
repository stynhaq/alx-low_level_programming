#include "variadic_functions.h"

/**
 * print_all - A function that prints anything
 *
 * @format: A list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	unsigned int x;
	va_list ap;
	char *c, *ceis;

	va_start(ap, format);

	ceis = "";

	x = 0;
	while (format && format[x])
	{
		switch (format[x])
		{
			case 'c':
				printf("%s%c", ceis,  va_arg(ap, int));
				break;
			case 'i':
				printf("%s%d", ceis, va_arg(ap, int));
				break;
			case 'f':
				printf("%s%f", ceis, va_arg(ap, double));
				break;
			case 's':
				c = va_arg(ap, char *);
				if (c == NULL)
					c = "(nil)";
				printf("%s%s", ceis, c);
				break;
			default:
				x++;
				continue;
		}
		ceis = ", ";
		x++;
	}

	printf("\n");
	va_end(ap);
}
