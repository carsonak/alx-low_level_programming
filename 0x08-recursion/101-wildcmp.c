#include "main.h"

/**
 * wildcmp - checks whether two strings are similar
 * @s1: Main string.
 * @s2: comparing string, can make use of the wildcard *.
 *
 * Return: 1 if strings are similar, 0 if not.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 != '\0' || *s2 != '\0')
	{
		if (*(s2 - 1) == '*')
		{
			if (*s2 == '*')
			{
				return (wildcmp(s1, ++s2));
			}
			else if (*s1 != *s2)
			{
				return (wildcmp(++s1, s2));
			}
			else if (*s1 == *s2)
			{
				return (wildcmp(++s1, ++s2));
			}
		}
		else if (*s2 == '*')
		{
			return (wildcmp(s1, ++s2));
		}
		else if (*s1 == *s2)
		{
			return (wildcmp(++s1, ++s2));
		}

		return (0);
	}

	return (1);
}
