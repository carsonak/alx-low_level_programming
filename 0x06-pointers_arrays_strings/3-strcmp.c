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

	while (s2[i] != '\0' || s1[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}

	return (0);
}
