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
	char *setter;

	if (nmemb < 1 || size < 1)
		return (NULL);

	mem = malloc(nmemb * size);
	if (mem == NULL)
		return (NULL);

	setter = mem;
	_memset(setter, 0, nmemb);

	return (mem);
}

/**
 *_memset - fills a memory with a constant bite.
 *@s: pointer to the string
 *@b: the character to be used
 *@n: number of times the character will be added
 *
 *Return: pointer to the string
 */

void *_memset(void *s, int b, unsigned int n)
{
	unsigned int i;
	int *hold;

	hold = s;
	for (i = 0; i < n; i++)
		hold[i] = b;

	return (s);
}
