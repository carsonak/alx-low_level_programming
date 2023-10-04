#include "main.h"

/**
 * argstostr - concatinates arguments passed to main into a string
 * @ac: Number of arguments passed.
 * @av: string arguments passed to main
 *
 * Return: pointer to final string
 */

char *argstostr(int ac, char **av)
{
	char *str = "";
	int i;

	if (ac == 0 || av == NULL)
		return (NULL);

	str = malloc(sizeof(*av) * ac + 1);
	if (str == NULL)
		return (NULL);

	for (i = 1; i < ac; i++)
	{
		str = _strcat(str, av[i]);
	}

	return (str);
}

/**
 *_strcat - Appends a string to another string.
 *@dest: string to be extended.
 *@src: string to be appended.
 *
 * Return: pointer to final string.
 */

char *_strcat(char *dest, char *src)
{
	unsigned long int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}

	j = 0;
	while (j < strlen(src))
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\n';
	dest[i + 1] = '\0';

	return (dest);
}
