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
	int i;

	for (i = 0; i < strlen(s); i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return (NULL);
}
