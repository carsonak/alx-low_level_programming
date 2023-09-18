#include "main.h"
#include <string.h>

/**
 *_puts - prints out a string
 *@str: the string
 */

void _puts(char *str)
{
	int a, i;

	a = strlen(str) - 1;

	for (i = 0; i <= a; i++)
		_putchar(*(str + i));
	_putchar('\n');
}
