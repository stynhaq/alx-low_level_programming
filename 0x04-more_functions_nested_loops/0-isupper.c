#include "main.h"
#include <ctype.h>

/**
 * _isupper - checks if a character is uppercase
 * @c: input
 *
 * Return: 0 if false  or 1 if true
 */
int _isupper(int c)
{
	if (isupper(c))
		return (1);
	return (0);
}
