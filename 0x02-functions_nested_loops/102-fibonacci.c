#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0
 */

int main(void)
{
    int x, y;
    long num1, num2, count;

    num1 = 1;
    num2 = 2;
    y = 50;

    for (x = 0; x < y; x++)
    {
        if (x == 49)
        {
            printf("%lu", num1);
        }
        else
        {
            printf("%lu, ", num1);
            count = num1 + num2;
            num1 = num2;
            num2 = count;
        }
    }

    printf("\n");
    return (0);
}
