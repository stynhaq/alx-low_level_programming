#include <stdio.h>

/**
 * main - a program that prints its name, followed by a new line
 *
 * @argc: integer count of the argument
 * @argv: array of argument strings
 *
 * Return: void
 */

int main(int argc, char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
