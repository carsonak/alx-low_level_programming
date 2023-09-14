#include <stdio.h>
#include "main.h"
#include <unistd.h>

/**
 *_isalpha - checks for alphabet characters.
 *@c: unsigned character to be checked.
 *
 *Return: 1 if true, 0 if false.
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
