#include "main.h"

/**
 * _calloc - reserves memory for an array of elements of a specified size
 * and of a specific number.
 * @nmemb: the number of elements to be reserved size for
 * @size: the size of each element
 *
 * Return: a pointer to the memory space, NULL on failure.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;

	if (nmemb < 1 || size < 1)
		return (NULL);

	mem = malloc(nmemb * size);
	if (mem == NULL)
		return (NULL);

	_memset(mem, '0', nmemb, size);

	return (mem);
}

/**
 *_memset - fills a memory with a constant bite.
 *@str: pointer of tpye void to the string
 *@b: ASCII of the character to be used
 *@n: number of times the character will be repeated
 *@size: number of bytes to be skipped, to adapt to size of different types
 *
 *Return: pointer to the string
 */

void *_memset(void *str, int b, size_t n, size_t size)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*((char *)(str) + (i * size)) = (char)b;

	return (str);
}
