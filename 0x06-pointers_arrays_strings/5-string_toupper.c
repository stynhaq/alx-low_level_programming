#include "main.h"

/**
 * string_toupper -  function that changes all lowercase
 *letters of a string to uppercase
 * @str: input string
 * Return: string capitalized
 */

char *string_toupper(char *str)
{

	int i = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 'a' + 'A';
	}
	return (str);
}
