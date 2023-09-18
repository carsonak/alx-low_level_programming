#include "main.h"

/**
 *print_array - prints out a string
 *@a: the string
 *@n: number of items to be printed
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
		if (i == n - 1)
			printf("%d", *(a + i));
		else
			printf("%d, ", *(a + i));
	printf("\n");
}
