#include "main.h"

/**
 * _strncat - a function that concatenate two strings
 * @dest: string to be appended to
 * @src: string to append
 * @n: append n number of bytes(chars)
 * Return: the concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_index = 0;
	int iter = 0;

	while (dest[dest_index] != '\0')
		dest_index++;

	while (src[iter] != src[n])
	{
		dest[dest_index] = src[iter];
		dest_index++;
		iter++;
	}
	dest[dest_index] = '\0';

	return (dest);
}
