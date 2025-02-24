#include "main.h"

/**
 * _strstr - search for a substring in a string.
 * @haystack: string to be checked.
 * @needle: the subtring to search for.
 *
 * Return: a pointer to the beginning of the substring, NULL if not found.
 */
char *_strstr(char *haystack, char *needle)
{
	size_t i, k;

	for (i = 0; haystack[i]; i++)
	{
		for (k = 0; needle[k] && (needle[k] == haystack[i + k]); k++)
			;

		if (needle[k] == '\0')
			return (&haystack[i]);
	}

	return (NULL);
}
