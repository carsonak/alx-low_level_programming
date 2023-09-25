#include "main.h"

/**
 *_memset - fills a memory with a constant bite.
 *@s: pointer to the string
 *@b: the character to be used
 *@n: number of times the character will be added
 *
 *Return: pointer to the string
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) = b;

	return (s);
}
