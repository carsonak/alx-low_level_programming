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
	char *bGstr = "";

	if (s1 == NULL && s2 == NULL)
		bGstr = malloc(sizeof(*bGstr));
	else if (s1 == NULL)
	{
		bGstr = malloc(sizeof(s2));
		if (bGstr == NULL)
			return (NULL);

		bGstr = _strncat(bGstr, s2, n);
	}
	else if (s2 == NULL)
	{
		bGstr = malloc(sizeof(s1));
		if (bGstr == NULL)
			return (NULL);

		bGstr = _strncat(bGstr, s1, sizeof(s1));
	}
	else
	{
		bGstr = malloc(sizeof(s1) + (sizeof(*s2) * n));
		if (bGstr == NULL)
			return (NULL);

		bGstr = _strncat(bGstr, s1, sizeof(s1));
		bGstr = _strncat(bGstr, s2, n);
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
