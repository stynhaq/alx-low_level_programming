#include <stdio.h>

/**
 * main - a program that prints all arguments it receives
 * @argc: argument counter
 * @argv: pointer to array of arguments
 * Return: 0 on success
 */



int main(int argc, char *argv[])
{
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}
