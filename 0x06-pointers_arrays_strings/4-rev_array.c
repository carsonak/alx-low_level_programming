#include "main.h"

/**
 *reverse_array - reverses an array of integers
 *@a: the array
 *@n: number of items in the array
 */

void reverse_array(int *a, int n)
{
	int i;
	int r[64];

	for (i = n; i >= 0; i--)
		r[n - i] = *(a + i);

	for (i = 0; i <= n; i++)
		*(a + i) = r[i];
}
