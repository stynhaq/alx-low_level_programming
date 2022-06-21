#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring
 * @accept: consequtive characters matched
 * @s: string to search against
 * Return: number of bytes matched
 */


unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int z = 0, k;

	while (s[i] != '\0')
	{
		for (k = 0; accept[k] != '\0'; k++)
		{
			if (s[i] = accept[j])
			{
				z++;
				break;
			}
			
			if (accept[j+1] == '\0' && s[i] != accept[j])
				return (z)
		}

		i++;

	}

	return (z);
}
