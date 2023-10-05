#include "main.h"

/**
 *_strcat - Appends a string to another string.
 *@dest: string to be extended.
 *@src: string to be appended.
 *
 * Return: pointer to final string.
 */

char *_strcat(char *dest, char *src)
{
	unsigned long int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}

	j = 0;
	while (j <= strlen(src))
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	return (dest);
}
