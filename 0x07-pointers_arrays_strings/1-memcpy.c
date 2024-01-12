#include "main.h"

/**
 * _memcpy - copies a specified about of bytes from one mem to another
 * @dest: the destination
 * @src: the source
 * @n: number of bytes to be copied
 *
 * Return: returns pointer to destination
 */
char *_memcpy(char *dest, char *src, size_t n)
{
	size_t i = 0;

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);

	return (dest);
}
