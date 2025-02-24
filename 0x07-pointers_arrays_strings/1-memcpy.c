#include "main.h"

/**
 * _memcpy - copies `n` bytes from one memory block to another.
 * @dest: the destination memory.
 * @src: source memory block.
 * @n: number of bytes to copy.
 *
 * Return: returns pointer to `dest`.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	size_t i;

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);

	return (dest);
}
