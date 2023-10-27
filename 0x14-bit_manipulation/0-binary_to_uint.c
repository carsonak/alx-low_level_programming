#include "main.h"

/**
 * binary_to_uint - converts a binary number inside a string to an int
 * @b: the string with the binary number
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned long int len, ttl = 0;
	long int i;

	if (b == NULL)
		return (0);

	len = strlen(b);
	for (i = 0; b[i]; i++, len--)
	{
		if (b[i] == '1')
			ttl += _power(len);
		else if (b[i] != '1' && b[i] != '0')
			return (0);
	}

	return (ttl);
}

/**
 * _power - raises 2 to power n
 * @n: power of two
 *
 * Return: power of 2 to n
 */
unsigned long int _power(int n)
{
	unsigned long int pow = 1;

	while (n - 1)
	{
		pow *= 2;
		n--;
	}

	return (pow);
}
