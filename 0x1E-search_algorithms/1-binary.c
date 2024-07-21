#include "search_algos.h"

/**
 * print_array - print an array of integers
 * @array: pointer to the array.
 * @size: number of items in the array.
 */
static void print_array(int *array, size_t size)
{
	size_t i = 0;

	if (!array || !size)
		return;

	printf("Searching in array: ");
	for (i = 0; i < size - 1; i++)
		printf("%d, ", array[i]);

	printf("%d\n", array[i]);
}

/**
 * binary_search - search for a value in an array of integers.
 * @array: pointer to the first element of the array to search in.
 * @size: number of elements in array.
 * @value: the value to search for.
 *
 * Return: index of value if found, else -1.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, mid = 0, right = 0;

	if (!array || !size)
		return (-1);

	right = size - 1;
	while (left <= right)
	{
		mid = (left + right) / 2;
		print_array(&array[left], right - left + 1);
		if (array[mid] < value)
			left = mid + 1;
		else if (array[mid] > value)
			right = mid - 1;
		else
			return (mid);
	}

	return (-1);
}
