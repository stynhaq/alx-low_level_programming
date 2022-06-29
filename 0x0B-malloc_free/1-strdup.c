#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - a function that returns a pointer to a
 * newly allocated space in memory, which contains
 * a copy of the string given as a parameter
 *
 * @str: variable that is a pointer to char type
 *
 * Return: NULL Or a pointer to the duplicated string
 */

char *_strdup(char *str)
{
	char *str2;
	int i = 0;

	if (str == NULL)
		return NULL;

	while (*(str + i))
		len++, i++;
	len++;

	duplicate_str = malloc(sizeof(char) * len);

	if (duplicate_str == NULL)
		return (NULL);

	i = 0;
	while (i < len)
	{
		*(duplicate_str + i) = *(str + i);
		i++;
	}

	return (duplicate_str);
}
