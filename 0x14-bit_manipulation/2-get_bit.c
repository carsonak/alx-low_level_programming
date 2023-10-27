#include "main.h"

/**
 * get_bit - gets the bit of a number at the given index
 * @n: The number
 * @index: The index
 *
 * Return: the bit, -1 on fail
 */
int get_bit(unsigned long int n, unsigned int index)
{
	n >>= index;

	return (n & 1);
}
