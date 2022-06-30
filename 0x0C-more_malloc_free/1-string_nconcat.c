#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - a function that concatenates two strings
 *
 * @n: integer count of the argument
 * @s1: array of argument strings
 * @s2: array of argument strings
 *
 * Return: concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int dest_index = 0;
	int iter = 0;
	char *dest2;
	int n1 = n;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	if (n1 < 0)
		return (NULL);

	if (strlen(s2) <= n)
	{
		n1 = strlen(s2);
	}

	dest2 = malloc(sizeof(*dest2) * (strlen(s1) + n1 + 1));

	if (dest2 == NULL)
		return (NULL);


	for (dest_index = 0; s1[dest_index] != '\0'; dest_index++)
	{
		dest2[dest_index] = s1[dest_index];
	}

	for (iter = 0; iter < n1; iter++)
	{
		dest2[dest_index + iter] = s2[iter];
	}

	dest2[dest_index + iter] = '\0';

	return (dest2);
}
