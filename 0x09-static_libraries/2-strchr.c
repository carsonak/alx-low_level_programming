#include "main.h"

/**
 *_strchr - finds a character in a string
 *@s: source string
 *@c: character
 *
 *Return: pointer to character in string or NULL if not found.
 */

char *_strchr(char *s, char c)
{
	unsigned long int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return (NULL);
}
