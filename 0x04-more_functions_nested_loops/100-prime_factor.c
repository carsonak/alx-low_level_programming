#include <stdio.h>
#include "main.h"

/**
 * lprime - prints largest prime factor of a number
 *
 * Return: void
 */
void lprime(void)
{
	unsigned long int x, a, b;

	x = 612852475143;
	b = 0;
	for (a = 2; a <= x; a++)
	{
		if ((x % a) == 0)
		{
			if (a > b)
				b = a;
			x = x / a;
			a = 1;
		}
	}
	printf("%lu\n", b);
}

/**
 * main - calls lprime
 *
 * Return: 0 always.
 */
int main(void)
{
	lprime();
	return (0);
}
