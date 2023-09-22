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
	unsigned long int nm1, nm2, sum, i;

	nm1 = 0;
	for (i = 0; n1[i] >= '0' && n1[i] <= '9'; i++)
	{
		nm1 = (nm1 * 10) + (n1[i] - '0');
	}

	nm2 = 0;
	for (i = 0; n2[i] >= '0' && n2[i] <= '9'; i++)
	{
		nm2 = (nm2 * 10) + (n2[i] - 48);
	}

	sum = nm1 + nm2;
	if (size_r < buffSz(sum))
	{
		return (NULL);
	}
	else
	{
		wrtArr(sum, r);
		return (r);
	}
}

/**
 * buffSz - calculates the required buffer size.
 * @n: the integer to be stored in an array.
 *
 * Return: int i, size of buffer.
 */
int buffSz(unsigned long int n)
{
	int i;

	while (n > 0)
	{
		i++;
		n /= 10;
	}

	return (i + 1);
}

/**
 * wrtArr - writes an integer to an array.
 * @n: the integer to be stored in an array.
 * @arr: array that is to be written.
 */
void wrtArr(unsigned long int n, char *arr)
{
	int i;
	unsigned long int dvd = 1;

	while (n / dvd > 9)
	{
		dvd *= 10;
	}

	for (i = 0; dvd > 0; i++)
	{
		arr[i] = ('0' + (n / dvd));
		n %= dvd;
		dvd /= 10;
	}

	arr[i] = '\0';
}
