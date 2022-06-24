#include "main.h"

/**
 * _memcpy - a function that copies memory area
 * @dest: memory area to copy to
 * @src: memory area to copy from
 * @n: size in bytes of characters to copy
 * Return:  a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int mem_size = n;
	int i = 0;

	while (mem_size > 0)
	{

		dest[i] = src[i];
		i++;
		mem_size--;
	}

	return (dest);
}
