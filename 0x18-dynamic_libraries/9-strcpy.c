#include "main.h"

/**
 * _strcpy - copies a string into a buffer.
 * @src: the string to copy.
 * @dest: pointer to the buffer.
 *
 * Return: pointer to the modified buffer.
 */
char *_strcpy(char *dest, char *src)
{
	size_t i = 0;

	while (src[i])
	{
		*(dest + i) = *(src + i);
		i++;
	}

	dest[i] = '\0';
	return (dest);
}
