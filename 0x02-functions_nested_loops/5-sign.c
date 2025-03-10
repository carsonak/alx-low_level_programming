#include <stdio.h>
#include "main.h"
#include <unistd.h>

/**
 * print_sign - checks for sign of number.
 * @n: signed int to be checked.
 *
 * Return: 1 if +ve, 0 if zero and -1 if -ve.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
