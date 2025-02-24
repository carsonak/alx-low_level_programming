#include "main.h"

/**
 * _strcmp - compares 2 strings.
 * @s1: first string.
 * @s2: second string.
 *
 * Return: 0 if both equal,
 * the difference between the first differing characters otherwise.
 */
int _strcmp(char *s1, char *s2)
{
	size_t i = 0;

	while (s1[i] && s2[i] && (s1[i] == s2[i]))
		i++;

	return (s1[i] - s2[i]);
}
