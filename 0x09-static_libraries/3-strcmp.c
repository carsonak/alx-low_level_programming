#include "main.h"

/**
 *_strcmp - compares 2 strings
 *@s1: first string.
 *@s2: second string.
 *
 *Return: 0 if both equal, -15 if s1 shorter, 15 if s1 longer.
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] == s2[i])
	{
		if (s2[i] != '\0' || s1[i] != '\0')
		{
			i++;
		}
		else
		{
			break;
		}

		if (s2[i] == '\0' && s1[i] == '\0')
			return (0);
	}

	if (s1[i] != s2[i])
		return (s1[i] - s2[i]);

	return (0);
}
