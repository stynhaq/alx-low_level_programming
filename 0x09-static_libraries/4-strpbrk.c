#include "main.h"
#include <string.h>

/**
 * _strpbrk - a function that searches a string for any of a set of bytes
 * @accept: first character matched
 * @s: string to search against
 * Return: number of bytes matched or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0, k;

	while (s[i] != '\0')
	{
		for (k = 0; accept[k] != '\0'; k++)
		{
			if (s[i] == accept[k])
			{
				s = &s[i];
				return (s);
			}

		}

		i++;

	}

	return (NULL);
}
