#include "main.h"

/**
 *leet - converts to 1337
 *@a: string.
 *
 * Return: pointer to converted string
 */
char *leet(char *a)
{
	int i;

	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] == 'a' || a[i] == 'A')
			a[i] = '4';
		else if (a[i] == 'e' || a[i] == 'E')
			a[i] = '3';
		else if (a[i] == 'o' || a[i] == 'O')
			a[i] = '0';
		else if (a[i] == 't' || a[i] == 'T')
			a[i] = '7';
		else if (a[i] == 'l' || a[i] == 'L')
			a[i] = '1';
	}

	return (a);
}

/**
 *isLeet - checks for 1337 characters
 *@c: character.
 *
 * Return: boolean true or false
 */
bool isLeet(char c)
{
	return (c == 'A' || c == 'a' || c == 'E' || c == 'e' || c == 'o' ||
			c == 'O' || c == 't' || c == 'T' || c == 'l' || c == 'L');
}
