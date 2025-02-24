#include "main.h"

/**
 * print_diagsums - prints sum of diagonals of a square array.
 * @a: square arraay
 * @size: size of the square
 */
void print_diagsums(int *a, int size)
{
	int index, j, mul;
	long int sum1, sum2, len;

	len = size * size;
	sum1 = 0;
	index = 0;
	j = size - 1;
	mul = 1;
	while (index < len)
	{
		if (index == (size * mul) - 1)
		{
			sum1 += a[index - j];
			j--;
			mul++;
		}
		index++;
	}

	sum2 = 0;
	index = 0;
	j = 0;
	mul = 1;
	while (index < len)
	{
		if (index == (size * mul) - 1)
		{
			sum2 += a[index - j];
			j++;
			mul++;
		}
		index++;
	}

	printf("%ld, %ld\n", sum1, sum2);
}
