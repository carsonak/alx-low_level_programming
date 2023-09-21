#include "main.h"

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
