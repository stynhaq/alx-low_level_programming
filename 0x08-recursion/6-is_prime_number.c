/**
 * prime_check - recursive function to test primality
 * @a: number to be checked for primality
 * @b: number to be checked for primality
 * Return:  0 if not prime or 1 if prime
 *
 */

int prime_check(int a, int b)
{
	if (a == b)
	{
		return (1);
	}

	if (a % b == 0)
	{
		return (0);
	}
	else
	{
		return (prime_check(a, b + 1));
	}
}


/**
 * is_prime_number - a function that checks if a number is a prime or not
 * @n: number to be checked for primality
 * Return:  0 if not prime or 1 if prime
 *
 */

int is_prime_number(int n)
{
	int c = 2;

	if (n <= 1)
	{
		return (0);
	}

	if (n == 2 || n == 3)
	{
		return (1);
	}

	else
	{
		return (prime_check(n, c));
	}
}
