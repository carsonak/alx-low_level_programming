#include "main.h"

/**
 * _strdup - copies a string into a new array.
 * @str: the string
 *
 * Return: a pointer to the new copy, NULL if it fails.
 */
char *_strdup(char *str)
{
	char *cpy;
	unsigned long int i = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	cpy = malloc((strlen(str) * sizeof(*str)) + 1);

	if (cpy == NULL)
	{
		return (NULL);
	}

	while (i <= strlen(str))
	{
		cpy[i] = str[i];
		i++;
	}

	return (cpy);
}
