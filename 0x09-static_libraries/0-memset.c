#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte
 * @s: pointer to the memory area
 * @b: constant byte, used to fill the memory area
 * @n: size of memory area
 * Return: pointer to the memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	int mem_size = n;

	if (mem_size > 0)
	{
		int iterator;

		for (iterator = 0; iterator < mem_size; iterator++)
		{
			s[iterator] = b;
		}
	}

	return (s);
}
