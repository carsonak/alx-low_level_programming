#include "main.h"

/**
 *leet - converts to 1337
 *@a: string.
 *
 * Return: pointer to converted string
 */
char *leet(char *a)
{
	int m, n;
	char *leet = "aeotlAEOTL", *l337 = "4307143071";

	for (m = 0; a[m]; m++)
	{
		for (n = 0; leet[n]; n++)
		{
			if (a[m] == leet[n])
				a[m] = l337[n];
		}
	}

	return (a);
}
