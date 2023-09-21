#include "main.h"

/**
 *_strncat - concatinates 2 strings with at most n characters from src.
 *@dest: first string.
 *@src: second string.
 *@n: max number of characters to be added.
 *
 * Return: pointer to the result string.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j, l;

	i = 0;
	l = strlen(src);
	while (dest[i] != '\0')
	{
		i++;
	}

	if (n <= l)
	{
		j = 0;
		while (j < n)
		{
			dest[i] = src[j];
			i++;
			j++;
		}
		dest[i] = '\0';
	}
	else
	{
		j = 0;
		while (j <= n)
		{
			dest[i] = src[j];
			i++;
			j++;
		}
	}

	return (dest);
}
