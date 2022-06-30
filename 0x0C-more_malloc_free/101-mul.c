#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two positive numbers
 *
 * @argc: argument counter
 * @argv: numbers to be multiplied
 *
 * Return: Sum of the numbers or 98 on failure
 */

int main(int argc, char *argv[])
{
	int i, j;
	unsigned long *mult;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	mult = malloc(sizeof(unsigned long) * argc);

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < 48 || argv[i][j] > 57)
			{
				printf("Error\n");
				exit(98);
			}
		}
	}

	*mult =  (unsigned long) atoi(argv[1]) * (unsigned long) atoi(argv[2]);


	printf("%lu\n", *mult);

	free(mult);
	return (0);
}
