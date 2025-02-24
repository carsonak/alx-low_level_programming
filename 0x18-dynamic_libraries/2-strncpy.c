#include "main.h"

/**
 * _strncpy - copies a string with at most n characters from src.
 * @dest: first string.
 * @src: second string.
 * @n: max number of characters to be copied.
 *
 * Return: pointer to the result string.
 */
char *_strncpy(char *dest, char *src, int n)
{
	size_t i = 0;

	while (src[i] && i < n)
		dest[i] = src[i];

	while (i < n)
		dest[i] = '\0';

	return (dest);
}
