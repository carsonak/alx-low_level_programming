#include "main.h"

/**
 * _memset - fills a continuous memory block with a constant byte.
 * @s: pointer to the memory block.
 * @b: the byte to be used.
 * @n: number of bytes to fill.
 *
 * Return: pointer to the modified memory block.
 */
char *_memset(char *s, char b, unsigned int n)
{
	size_t i;

	for (i = 0; i < n; i++)
		*(s + i) = b;

	return (s);
}
