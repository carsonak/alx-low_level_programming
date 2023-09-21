#include "main.h"

/**
 *string_toupper - converts letters to uppercase.
 *@a: string.
 *
 *Return: pointer to the new string.
 */
char *string_toupper(char *a)
{
	int i;

	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] >= 'a' && a[i] <= 'z')
		{
			a[i] -= 32;
		}
	}

	return (a);
}
