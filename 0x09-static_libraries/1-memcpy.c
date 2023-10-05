#include "main.h"

/**
 *_memcpy - copies a memory area
 *@dest: the destination for the characters
 *@src: source characters
 *@n: number of characters to be printed
 *
 *Return: returns pointer to destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);

	return (dest);
}
