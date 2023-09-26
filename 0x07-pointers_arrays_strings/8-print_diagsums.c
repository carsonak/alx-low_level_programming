#include "main.h"

/**
 *print_diagsums - prints sum of diagonals of a square array.
 *@a: square arraay
 *@size: size of the square
 */

void print_diagsums(int *a, int size)
{
	int i;
	long int sum1, sum2, len;

	a = &a[0];
	len = (size - 1) * (size - 1);
	sum1 = 0;
	for (i = 0; i <= len; i++)
	{
		printf("%d, ", *(a + i));
		if (*(a + i) % size == 0)
		{
			sum1 += *(a + i);
		}
	}
	putchar('\n');

	sum2 = 0;

	for (i = 0; i <= len; i++)
	{
		printf("%d, ", *(a + i));
		if (*(a + i) % size == 0)
		{
			sum2 += *(a + i + i);
		}
	}
	putchar('\n');

	printf("%ld, %ld\n", sum1, sum2);
}
