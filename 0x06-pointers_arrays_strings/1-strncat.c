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
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}

	if (dest[i] != '\0' && src[i] != '\0')
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

	return (dest);
}
