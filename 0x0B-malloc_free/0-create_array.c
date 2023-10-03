#include "main.h"

/**
 * create_array - creates an array of specified size
 * and initialises it with a specified value.
 * @size: size of the array.
 * @c: initial value.
 *
 * Return: a pointer to the array, NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}

	arr = malloc(sizeof(c) * size);

	if (arr == NULL)
	{
		return (NULL);
	}

	while (i < size)
	{
		arr[i] = c;
		i++;
	}

	return (arr);
}
