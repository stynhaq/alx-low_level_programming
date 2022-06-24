#include "main.h"
#include <string.h>

/**
 * _strstr - a function that locates a substring
 * @haystack: string to be searched
 * @needle: substring to search for
 * Return: a pointer to the start of substring or NULL
 */


char *_strstr(char *haystack, char *needle)
{
	int i = 0, j, k;

	if (needle[0] == '\0')
		return (haystack);

	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[0])
		{
			k = i, j = 0;

			while (needle[j] != '\0')
			{
				if (haystack[k] == needle[j])
				{
					k++, j++;
				}
				else
				{
					break;
				}

			}

			if (needle[j] == '\0')
			{
				return (haystack + i);
			}
		}

		i++;
	}

	return (NULL);
}
