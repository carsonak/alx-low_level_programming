#include "main.h"

/**
 * _strlen_recursion - finds length of a string
 * @s: the string
 *
 * Return: lenght of the string.
 */

int _strlen_recursion(char *s)
{
	int i = 1;

	if (*s != '\0')
	{
		i += _strlen_recursion(++s);
	}
	else
	{
		return (0);
	}

	return (i);
}
