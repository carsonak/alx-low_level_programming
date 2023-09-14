#include "main.h"
#include <stdio.h>

/**
 *print_number - prints the given number
 *@n: an integer
 *
 *Return: void
 */

void print_number(int n)
{
	int div = 1;

	if (n == -2147483648)
	{
		_putchar('-');
		_putchar('2');
		n = 147483648;
	}

	if (n == 0)
		_putchar('0');
	else
	{

		if (n < 0)
		{
			n = -n;
			_putchar('-');
		}
		while (n / div > 9)
		{
			div *= 10;
		}
		while (div > 0)
		{
			_putchar('0' + (n / div));
			n %= div;
			div /= 10;
		}
	}
}
