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
	r[size_r] = '\0';
	k = size_r - 1;
	sumL = 0;
	while (i >= 0 || j >= 0 || sumL > 0)
	{
		if (j < 0)
		{
			sumL += (*(n1 + i) - '0');
		}
		else if (i < 0)
		{
			sumL += (*(n2 + j) - '0');
		}
		else
		{
			sumL += ((*(n1 + i) - '0') + (*(n2 + j) - '0'));
		}

		if (k < 0 && (i >= 0 || j >= 0 || sumL > 0))
		{
			return (0);
		}
		else
		{
			r[k] = (sumL % 10) + '0';
			sumL /= 10;
		}

		i--;
		j--;
		k--;
	}

	return (r + k + 1);
}
