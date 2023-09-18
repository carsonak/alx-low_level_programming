#include "main.h"

/**
 *puts2 - prints out every other character of a string
 *@str: the string
 */

void puts2(char *str)
{
	int a, i;

	a = strlen(str) - 1;

	for (i = 0; i <= a; i++)
	{
		if (i % 2 == 0)
			_putchar(*(str + i));
	}
	_putchar('\n');
}
