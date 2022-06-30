#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - a function that allocates memory for an array, using malloc
 *
 * @nmemb: array of elements
 * @size: size of array
 *
 * Return: NULL if size or array is 0
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	mem = calloc(nmemb, size);

	if (mem == NULL)
		return (NULL);

	return (mem);
}
