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
	char *arg, *str = "";
	int i;

	if (ac == 0 || av == NULL)
		return (NULL);

	str = malloc(sizeof(*av) * ac + 1);
	if (str == NULL)
		return (NULL);

	for (i = 1; i < ac; i++)
	{
		/*printf("Loop %d\n", i);*/
		arg = _strcat(av[i], "\n");

		/*printf("Loop %d: Part2\n", i);*/
		str = _strcat(str, arg);
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

	/*printf("%s", dest);*/

	j = 0;
	while (j <= strlen(src))
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	/*printf(" : %s", dest);*/

	return (dest);
}
