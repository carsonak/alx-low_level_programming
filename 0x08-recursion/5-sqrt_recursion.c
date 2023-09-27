#include "main.h"

/**
 * _sqrt_recursion - determines square root of a number.
 * @n: the number
 *
 * Return: the square root, or -1 if it doesn't have one.
 */
int _sqrt_recursion(int n)
{
	if (n == 1)
	{
		return (1);
	}

	return (look_sqrt(n, 4));
}

/**
 * look_sqrt - finds the smallest divider of a number to determine
 * its square root.
 * @b: the number
 * @div: divider
 *
 * Return: the square root, or -1 if no square root.
 */
int look_sqrt(int b, int div)
{
	if (b < 4)
	{
		return (-1);
	}
	else if (div < (b / 2))
	{
		if (b / div == div && b % div == 0)
		{
			return (div);
		}
		else
			return (look_sqrt(b, ++div));
	}

	return (-1);
}
