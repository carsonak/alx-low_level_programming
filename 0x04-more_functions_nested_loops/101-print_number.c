#include "main.h"

/**
 *print_number - prints the given number
 *@n: an integer
 *
 *Return: void
 */

void print_number(int n)
{
	unsigned int num, div = 1;

	if (n < 0)
	{
		num = -n;
		_putchar('-');
	}
	while (num / div > 9)
	{
		div *= 10;
	}
	while (div > 0)
	{
		_putchar('0' + (num / div));
		num %= div;
		div /= 10;
	}
}
