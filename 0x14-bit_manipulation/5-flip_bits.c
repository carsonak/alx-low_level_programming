#include "main.h"

/**
 * flip_bits - calculates how many bits need to be flipped to switch from one
 * number to another
 * @n: first number
 * @m: ssecond number
 *
 * Return: number of bits to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int check = 1, diff = 0;
	unsigned int count = 0;

	diff = n ^ m;

	while (check)
	{
		if (diff & check)
			count++;

		check <<= 1;
	}

	return (count);
}
