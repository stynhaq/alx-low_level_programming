#include "main.h"

/**
 * reverse_array - a function that reverses the content of an array of integers
 * @a: an array of integers
 * @n: number of elements in the array
 */

void reverse_array(int *a, int n)
{

	int placeholder, start = 0;
	int end = n - 1;

	while (start < end)
	{
		placeholder = *(a + start);
		*(a + start) = *(a + end);
		*(a + end) = placeholder;
		start++, end--;
	}
}
