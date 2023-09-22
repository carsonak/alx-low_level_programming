#include "main.h"

/**
 *rot13 - rot13 cypher
 *@a: string to be encrypted.
 *
 * Return: pointer to converted string
 */
char *rot13(char *a)
{
	int i;

	for (i = 0; a[i] != '\0'; i++)
	{
		while ((a[i] >= 'A' && a[i] <= 'Z') || (a[i] >= 'a' && a[i] <= 'z'))
		{
			if ((a[i] >= 'N' && a[i] <= 'Z') || (a[i] >= 'n' && a[i] <= 'z'))
			{
				a[i] -= 13;
			}
			else
			{
				a[i] += 13;
			}

			i++;
		}
	}

	return (a);
}
