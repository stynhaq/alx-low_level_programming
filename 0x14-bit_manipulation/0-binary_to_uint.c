#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: binary
 * Return: unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int convert;
	unsigned int x;
	int y;

	if (b == NULL)
		return (0);

	for (y = 0; b[y]; y++)
	{
		if (b[y] != '0' && b[y] != '1')
			return (0);
	}
	for (x = 1, convert = 0, y--; y >= 0; y--, x *= 2)
	{
		if (b[y] == '1')
			convert += x;
	}

	return (convert);
}
