#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - a function that creates an array of chars,
 * and initializes it with a specific char
 *
 * @size: size of the array
 * @c: character input
 *
 * Return: NULL if size is 0 Or a pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	int i = 0;

	if (size <= 0)
		return (NULL);
	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
		return (NULL);

	while (i < (int)size)

	{
		*(arr + i) = c;
		i++;
	}
	*(arr + i) = '\0';

	return (arr);

}
