#include "main.h"

/**
 * print_binary - calls binary assist if n > 0
 * @n: decimal number
 */
void print_binary(unsigned long int n)
{
	if (n > 0)
		binary_assist(n);
	else
		_putchar('0');
}

/**
 * binary_assist - converts decimal to binary
 * @n: decimal number
 */
void binary_assist(unsigned long int n)
{
	char bi;

	if (n)
	{
		if (n & 1)
			bi = '1';
		else
			bi = '0';

		n >>= 1;
		binary_assist(n);
		_putchar(bi);
	}
	else
		return;
}
