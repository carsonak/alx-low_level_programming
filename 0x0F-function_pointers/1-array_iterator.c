#include "function_pointers.h"

/**
 * array_iterator - Iterates through an array and paases each element
 * on to another function.
 * @array: the array
 * @size: size of the array
 * @action: the function to be executed
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && size && action)
		for (i = 0; i < size; i++)
			action(array[i]);
	else
		return;
}
