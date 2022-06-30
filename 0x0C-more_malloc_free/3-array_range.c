#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - a function that creates an array of integers
 *
 * @min: start of array
 * @max: end of array
 *
 * Return: Pointer to new array or NULL if malloc fails
 */

int *array_range(int min, int max)
{
	int i = 0;

	int *x;

	int y = (max - min + 1);


	if (min > max)
		return (NULL);

	x = malloc(sizeof(int) * y);

	if (x == NULL)
		return (NULL);

	while (i < y)
	{
		x[i] = min;
		i++;
		min++;
	}
	return (x);
}
