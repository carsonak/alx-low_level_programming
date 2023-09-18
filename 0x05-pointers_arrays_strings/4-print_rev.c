#include "main.h"
#include <string.h>

/**
 *print_rev - prints out a string in reverse
 *@s: the string
 */

void print_rev(char *s)
{
	int a, i;

	a = strlen(s);

	for (i = a - 1; i >= 0; i--)
		_putchar(*(s + i));
	_putchar('\n');
}
