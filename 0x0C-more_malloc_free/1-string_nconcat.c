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

	if (n <= strlen(s2))
	{
		bGstr = malloc(strlen(s1) + n + 1);

		if (bGstr == NULL)
			return (NULL);

		_strcpy(bGstr, s1);
		_strncat(bGstr, s2, n);
	}
	else
	{
		bGstr = malloc(strlen(s1) + (strlen(s2) + 1));

		if (bGstr == NULL)
			return (NULL);

		_strcpy(bGstr, s1);
		_strncat(bGstr, s2, strlen(s2));
	}

	return (bGstr);
}

/**
 * _strcpy - copies a string to a buffer
 * @src: the string to be copied
 * @dest: pointer to buffer
 *
 * Return: *dest
 */
char *_strcpy(char *dest, char *src)
{
	int a, i;

	a = strlen(src);

	i = 0;
	while (i <= a)
	{
		*(dest + i) = *(src + i);
		i++;
	}

	return (dest);
}

/**
 * _strncat - concatinates 2 strings with at most n characters from src.
 * @dest: first string.
 * @src: second string.
 * @n: max number of characters to be added.
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
