#include "main.h"

/**
 * swap_int - a function that swaps the values
 * of two integers.
 * @a: - integer to swap
 * @b: - integer to swap
 */

void swap_int(int *a, int *b)
{
	int swp;

	swp = *a;
	*a = *b;
	*b = swp;
}
