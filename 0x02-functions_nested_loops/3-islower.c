#include <stdio.h>
#include "main.h"
#include <unistd.h>

/**
 *_islower - check for lowercase characters.
 *@c: unsigned character ranging from a to z.
 *
 *Return: 1 if true, 0 if false.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
