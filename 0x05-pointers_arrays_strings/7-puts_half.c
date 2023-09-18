#include "main.h"

/**
 *puts_half - prints out last half of a string
 *@str: the string
 */

void puts_half(char *str)
{
	int a, i;

	a = strlen(str);

	if (a % 2 == 0)
	{
		for (i = a / 2; i < a; i++)
			_putchar(*(str + i));
		_putchar('\n');
	}
	else
	{
		for (i = (a + 1) / 2; i < a; i++)
			_putchar(*(str + i));
		_putchar('\n');
	}
}
