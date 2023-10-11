#include "function_pointers.h"

/**
 * int_index - searches for an integer in an array
 * @array: array of integers
 * @size: size of the array
 * @cmp: the function used to compare integers
 *
 * Return: the index of first match, -1 for no match, 0 for empty array
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp && size > 0)
	{
		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);

		if (i == size)
			return (-1);
	}

	return (0);
}
