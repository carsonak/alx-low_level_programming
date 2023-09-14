#include "main.h"
#include <unistd.h>

/**
 *print_line - prints a line of size n
 *@n: number of lines to be printed
 *
 *Return: void
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (!(n <= 0))
			_putchar('_');
		else
			break;
	}
	_putchar('\n');
}
