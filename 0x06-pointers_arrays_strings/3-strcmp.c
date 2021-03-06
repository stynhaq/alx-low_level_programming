#include "main.h"

/**
 * _strcmp - a function that compares two strings
 * @s1: first input string
 * @s2: second input string
 * Return: negative if s1 < s2
 * zero if s1 == s2
 * positive if s1 > s2
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (*(s1 + i) == *(s2 + i) && *(s1 + i))
		i++;

	if (*(s2 + i))
		return (*(s1 + i) - *(s2 + i));
	else
		return (0);
}
