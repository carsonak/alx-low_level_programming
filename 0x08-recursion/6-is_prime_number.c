#include "main.h"

/**
 * is_prime_number - evaluates whether a number is a prime number
 * @n: the number
 *
 * Return: 1 if it is a prime number, 0 if it is not.
 */
int is_prime_number(int n)
{
	/*If the number doesn't have a divider then return 1*/
	if (least_div(n, 2))
	{
		return (1);
	}

	return (0);
}

/**
 * least_div - finds the smallest divider of a number to determine
 * if its a prime number.
 * @b: the number
 * @div: divider
 *
 * Return: 0 if not a prime number and 1 if it is.
 */
int least_div(int b, int div)
{
	if (b < 2)
	{
		return (0);
	}
	else if (div < (b / 2))
	{
		if (b % div == 0)
		{
			return (0);
		}
		else
			return (least_div(b, ++div));
	}

	return (1);
}
