/**
 * _calc_square - a function that validates if a number is a square root
 * @a: input number, check if the sqaure root is natural
 * @b: number to test if is the root
 * Return:  the natural square root of the number or -1
 *
 */

int _calc_square(int a, int b)
{
	if (b * b == a)
	{
		return (b);
	}

	if (b * b > a)
	{
		return (-1);
	}
	else
	{
		return (_calc_square(a, b + 1));
	}
}


/**
 * _sqrt_recursion - a function that returns the natural square root of a num
 * @n: input number to get it's square root
 * Return:  the natural square root of the number
 *
 */

int _sqrt_recursion(int n)
{
	if (n <= 0)
	{
		return (-1);
	}
	else
	{
		return (_calc_square(n, 0));
	}
}
