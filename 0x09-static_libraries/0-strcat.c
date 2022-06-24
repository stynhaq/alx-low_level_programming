#include <stdio.h>

/**
 * _strcat - a function that concatenates two strings
 * @dest: string to be appended to
 * @src: string to append
 * Return: concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int dest_index = 0;
	int iter = 0;

	while (dest[dest_index] != '\0')
		dest_index++;

	while (src[iter] != '\0')
	{
		dest[dest_index] = src[iter];
		dest_index++;
		iter++;
	}

	dest[dest_index] = '\0';

	return (dest);
}
