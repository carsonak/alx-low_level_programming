#include "main.h"

/**
 * factorial - prints factorial of a +ve number.
 * @n: the number
 *
 * Return: -1 if the number is negative. factorial of the number
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
