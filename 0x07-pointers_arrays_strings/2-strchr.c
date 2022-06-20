#include "main.h"
#include <string.h>
/**
 * _strchr - a function that locates a character in a string
 * @c: character to find in the string
 * @s: given string to be searched upon
 * Return: the concatenated string
 */


char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0' && s[i] != c)
	{
		i++;
	}

	if (s[i] == c)
		return (&s[i]);
	else
		return (NULL);


}
