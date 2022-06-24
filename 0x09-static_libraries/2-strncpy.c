#include "main.h"

/**
 * _strncpy - a function that copies a string
 * @dest: destination to copy source file to
 * @src: source file to copy
 * @n: the n bytes to be copied
 * Return: the copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0; j < n && src[j] != '\0'; j++)
		dest[j] = src[j];
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);
}
