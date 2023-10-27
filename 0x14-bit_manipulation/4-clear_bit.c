#include "main.h"

/**
 * clear_bit - sets the bit at the given index to 1
 * @n: pointer to the number
 * @index: index to be modified
 *
 * Return: 1 on success, -1 on failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (8 * sizeof(unsigned long int)))
		return (-1);

	*n = ~(*n);
	*n |= (1 << index);
	*n = ~(*n);

	return (1);
}
