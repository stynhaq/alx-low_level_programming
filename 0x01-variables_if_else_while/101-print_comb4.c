#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int ch, n, m;

	for (ch = 48; ch < 58; ch++)
	{
		for (n = 48; n < 58; n++)
        {
		for (m = 48; m < 58; m++)
		{
			if (ch == n || ch == m || n == m || n <= ch || m <= n)
			{
			}
			else
			{
				putchar(ch);
				putchar(n);
				putchar(m);
				if (ch == 55 && n == 56 && m == 57)
                    			{
                    			}
                    		else
                    			{
                        			putchar(44);
                        			putchar(' ');
                   			}
                	}
            	}
        }
    }
    putchar('\n');

    return (0);
}
