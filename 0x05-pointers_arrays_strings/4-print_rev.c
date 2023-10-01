#include "main.h"

/**
 *print_rev - prints out a string in reverse
 *@s: the string
 */
void print_rev(char *s)
{
	int i;

	for (i = _strlen(s) - 1; i >= 0; i--)
		_putchar(*(s + i));

	_putchar('\n');
}

/**
 *_strlen - prints string length.
 *@s: string
 *
 *Return: lenth of the string
 */

int _strlen(char *s)
{
	int i, cnt = 0;

	for (i = 0; s[i] != '\0'; i++)
		cnt++;

	return (cnt);
}
