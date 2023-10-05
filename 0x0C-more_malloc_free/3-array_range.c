#include "main.h"

/**
 * array_range - creates an array of integers with a certain range of numbers.
 * @min: first number in array.
 * @max: last number in array.
 *
 * Return: pointer to the array, NULL on failure.
 */
int *array_range(int min, int max)
{
	int i, j, *num_arr;

	if (min > max)
		return (NULL);

	num_arr = malloc(sizeof(int) * (max - min + 1));
	if (num_arr == NULL)
		return (NULL);

	for (i = min, j = 0; i <= max; i++, j++)
		num_arr[j] = i;

	return (num_arr);
}
