#include "search_algos.h"

/**
 * linear_search - search for a value in an array of integers.
 * @array: a pointer to the first element of the array to search in.
 * @size: number of elements in array.
 * @value: the value to search for.
 *
 * Return: first index of value if found, else -1.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	for (i = 0; array && i < size; i++)
	{
		printf("Value checked array[%zu] = [%d]", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
