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
	int l1, l2;

	l1 = strlen(s1);
	l2 = strlen(s2);
	if (l1 == l2)
	{
		return (0);
	}
	else if (l1 > l2)
	{
		return (15);
	}
	else
	{
		return (-15);
	}
}
