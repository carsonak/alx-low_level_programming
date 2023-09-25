#include "main.h"

/**
 *_strpbrk - Checks if any of the characters on a string match any on another
 *string.
 *@s: String to be checked
 *@accept: the check string
 *
 *Return: a pointer to the byte in s that matches any in accept or
 *NULL if none.
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; i < strlen(accept); i++)
		for (j = 0; j < strlen(s); j++)
			if (accept[i] == s[j])
				return (&s[j]);
	return (NULL);
}
