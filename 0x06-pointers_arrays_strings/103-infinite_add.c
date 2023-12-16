#include "main.h"

/**
 * infinite_add - adds numbers stored in arrays.
 * @n1: the first integer array.
 * @n2: the second integer array.
 * @r: the resulting sum array.
 * @size_r: buffer size of r.
 *
 * Return: pointer to r.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	long int i, j;
	int sumL, k;

	i = strlen(n1) - 1;
	j = strlen(n2) - 1;
	r[size_r - 1] = '\0';
	k = size_r - 2;
	sumL = 0;
	while (i >= 0 || j >= 0 || sumL > 0)
	{
		if (i >= 0)
		{
			sumL += (n1[i] - '0');
			--i;
		}

		if (j >= 0)
		{
			sumL += (n2[j] - '0');
			--j;
		}

		if (k < 0)
			return (NULL);

		r[k] = (sumL % 10) + '0';
		sumL /= 10;
		--k;
	}

	return (r + k + 1);
}
