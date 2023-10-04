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
	char *str;
	int i, j;
	unsigned long int len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		if (strlen(av[i]) > len)
			len = strlen(av[i]) + 1;
	}

	str = malloc(sizeof(**av) * len + 1);
	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, str++)
			*str = av[i][j];

		*str = '\n';
	}

	return (str);
}
