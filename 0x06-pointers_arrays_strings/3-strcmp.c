#include "main.h"

/**
 *_strcmp - compares 2 strings
 *@s1: first string.
 *@s2: second string.
 *
 *Return: 0 if both equal, -ve if s1 shorter, +ve if s1 longer.
 */
int _strcmp(char *s1, char *s2)
{
	unsigned int i = 0;

	for (i = 0; (s2[i] != '\0') || (s1[i] != '\0'); i++)
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);

	return (0);
}
