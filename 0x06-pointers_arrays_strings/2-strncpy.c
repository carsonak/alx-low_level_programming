#include "main.h"

/**
 *_strncpy - copies a string with at most n characters from src.
 *@dest: first string.
 *@src: second string.
 *@n: max number of characters to be copied.
 *
 * Return: pointer to the result string.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, j, l = strlen(src);

	i = 0;
	j = 0;
	while (i < n)
	{
		if (j >= l)
		{
			dest[i] = '\0';
		}
		else
		{
			dest[i] = src[j];
		}
		i++;
		j++;
	}

	return (dest);
}
