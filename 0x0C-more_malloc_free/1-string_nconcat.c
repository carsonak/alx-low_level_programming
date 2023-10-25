#include "main.h"

/**
 * string_nconcat - concatanates two strings into a new string
 * but with a max of n bytes from second string.
 * @s1: first string.
 * @s2: second string.
 * @n: max number of bytes.
 *
 * Return: pointer to the new string, NULL if malloc fails.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *bGstr;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	if (n <= (strlen(s2) + 1))
	{
		bGstr = malloc((strlen(s1) + 1) + n);

		if (bGstr == NULL)
			return (NULL);

		bGstr = _strncat(bGstr, s1, (strlen(s1) + 1));
		bGstr = _strncat(bGstr, s2, n);
	}
	else
	{
		bGstr = malloc((strlen(s1) + 1) + (strlen(s2) + 1));

		if (bGstr == NULL)
			return (NULL);

		bGstr = _strncat(bGstr, s1, (strlen(s1) + 1));
		bGstr = _strncat(bGstr, s2, (strlen(s2) + 1));
	}

	return (bGstr);
}

/**
 *_strncat - concatinates 2 strings with at most n characters from src.
 *@dest: first string.
 *@src: second string.
 *@n: max number of characters to be added.
 *
 * Return: pointer to the result string.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
