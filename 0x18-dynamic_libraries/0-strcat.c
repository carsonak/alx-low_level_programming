#include "main.h"

/**
 * _strcat - Appends a string to another string.
 * @dest: string to be extended.
 * @src: string to be appended.
 *
 * Return: pointer to final string.
 */
char *_strcat(char *dest, char *src)
{
	size_t i = 0, j = 0;

	while (dest[i])
	{
		i++;
	}

	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = 0;
	return (dest);
}
