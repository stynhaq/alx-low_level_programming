#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - function that reallocates a memory block using malloc and free
 *
 * @ptr: pointer to the memory previously allocated
 * @old_size: size, in bytes, of the allocated space for ptr
 * @new_size: new size, in bytes of the new memory block
 *
 * Return: pointer or NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *x;
	unsigned int i;
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	
	if (new_size == old_size)
		return (ptr);
	
	if (ptr == NULL)
	{
		x = malloc(new_size);
		if (x == NULL)
			return (NULL);
		else
			return (x);
	}
	
	x = malloc(new_size);
	
	if (x == NULL)
		return (NULL);
	
	for (i = 0; i < old_size && i < new_size; i++)
		*((char *)x + i) = *((char *)ptr + i);
	free(ptr);
	
	return (x);
}
