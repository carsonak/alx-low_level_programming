#include "main.h"

/**
 *_strstr - locates a substring in a string.
 *@haystack: String to be checked
 *@needle: the check string
 *
 *Return: a pointer to the beginning of the substring and NULL if not found.
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j, nlen, hlen;

	nlen = strlen(needle);
	hlen = strlen(haystack);

	for (i = 0; i < hlen; i++)
	{
		for (j = 0; j < nlen; j++)
		{
			if (needle[j] != haystack[i + j])
				break;
		}
		if (needle[j] == '\0')
			return (&haystack[i]);
	}
	return (NULL);
}
