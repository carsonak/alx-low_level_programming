#include "main.h"

/**
 *reverse_array - reverses an array of integers
 *@a: the array
 *@n: number of items in the array
 */

void reverse_array(int *a, int n)
{
	long int i, j, b;

	for (i = n - 1, j = 0; i > j; i--, j++)
	{
		b = *(a + i);
		*(a + i) = *(a + j);
		*(a + j) = b;
	}
}
