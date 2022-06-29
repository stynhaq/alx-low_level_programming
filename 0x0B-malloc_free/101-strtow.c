#include <stdio.h>
#include <stdlib.h>



/**
 * word_count - checks the num of words in a string
 *
 * @x: the string pointer
 *
 * Return: Num of words in a string
 */

int word_count(char *x)
{
	int sign;
	int y;
	int z;

	sign = 0;
	z = 0;

	for (y = 0; x[y] != '\0'; y++)
	{
		if (x[y] == ' ')
		{
			sign = 0;
		}
		else if (sign == 0)
		{
			sign = 1;
			z++;
		}
	}
	return (z);
}



/**
 * strtow - a function that splits a string into words
 *
 * @str: input string to be split
 *
 * Return: NULL on failure
 */

char **strtow(char *str)
{
	char **grid;
	char *f;
	int a, b = 0, c = 0, word, rg = 0, dy, dx;

	while (*(str + rg))
		rg++;
	word = word_count(str);
	if (word == 0)
		return (NULL);
	grid = (char **) malloc(sizeof(char *) * (word + 1));
	if (grid == NULL)
		return (NULL);
	for (a = 0; a <= rg; a++)
	{
		if (str[a] == ' ' || str[a] == '\0')
		{
			if (c)
			{
				dx = a;
				f = (char *) malloc(sizeof(char) * (c + 1));
				if (f == NULL)
					return (NULL);
				while (dy < dx)
					*f++ = str[dy++];
				*f = '\0';
				grid[b] = f - c;
				b++;
				c = 0;
			}
		}
		else if (c++ == 0)
			dy = a;
	}
	grid[b] = NULL;
	return (grid);
}
