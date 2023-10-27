#include "main.h"

/**
 * get_bit - gets the bit of a number at the given index
 * @n: The number
 * @index: The index
 *
 * Return: the bit, -1 on fail
 */
int get_bit(unsigned long int n, unsigned int index)
{
	char *bi_num;
	int idx_i = -1;
	unsigned int i, digits = 0;
	unsigned long int pow = 2;

	while (pow <= n)
	{
		pow *= 2;
		digits++;
	}

	if (index > digits)
		return (idx_i);

	bi_num = malloc(sizeof(*bi_num) * (digits + 1));

	if (bi_num)
	{
		idx_i = 0;
		for (i = 0; n; i++)
		{
			if (n & 1)
				bi_num[i] = '1';
			else
				bi_num[i] = '0';

			if (i == index)
			{
				idx_i = bi_num[i] - '0';
				break;
			}

			n >>= 1;
		}
	}
	else
		return (idx_i);

	free(bi_num);
	return (idx_i);
}
