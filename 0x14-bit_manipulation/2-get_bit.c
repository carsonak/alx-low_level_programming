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

	if (index > (sizeof(unsigned long int) * 8))
		return (-1);

	n >>= index;

	return (n & 1);
}
