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
	int len = 0;

	if (str == NULL)
		return (NULL);

	while (*(str + i))
		len++, i++;
	len++;

	str2 = malloc(sizeof(char) * len);

	if (str2 == NULL)
		return (NULL);

	i = 0;
	while (i < len)
	{
		*(str2 + i) = *(str + i);
		i++;
	}

	return (str2);
}
