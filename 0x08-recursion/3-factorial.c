/**
 * factorial - a function that returns the factorial of a given number
 * @n: the input number that need to return n!
 * Return:  factorial of the number n
 *
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
