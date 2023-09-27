#include "main.h"

/**
 * _pow_recursion - raises a number to a certain power
 * @x: the number
 * @y: the power
 *
 * Return: -1 if the number is negative or power of x to y if succesful
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}

	return (x * _pow_recursion(x, --y));
}
