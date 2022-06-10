#include "main.h"
#include <ctype.h>

/**
 * _isdigit - function that checks for a digit (0 through 9)
 * @c: the input digit
 *
 * Return: 1 if true or 0 when false
 */
int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	return (0);
}
