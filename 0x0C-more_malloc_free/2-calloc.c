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

	return (mem);
}
