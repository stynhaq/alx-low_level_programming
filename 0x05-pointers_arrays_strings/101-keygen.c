#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - program that generates random valid passwords
 * Return: 0
 */

int main(void)
{
	int password, x;

	srand(time(NULL));
	x = 0;
	while (x <= 2645)
	{
		password = (rand() % 128);
		x += password;
		printf("%c", password);
	}
	printf("%c", 2772 - x);
	return (0);
}
