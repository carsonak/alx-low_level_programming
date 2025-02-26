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
	int i;

	for (i = 0; src[i] && i < n; ++i)
		dest[i] = src[i];

	for (; i < n; ++i)
		dest[i] = '\0';

	return (dest);
}
