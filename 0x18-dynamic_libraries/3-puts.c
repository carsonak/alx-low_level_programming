#include "main.h"

/**
 * _puts - prints out a string then a line.
 * @str: the string
 */
void _puts(char *str)
{
	size_t i;

	for (i = 0; *(str + i); i++)
		_putchar(*(str + i));

	_putchar('\n');
}
