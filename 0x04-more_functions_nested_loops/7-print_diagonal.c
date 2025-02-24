#include "main.h"
#include <unistd.h>

/**
 * print_diagonal - prints a diagonal line
 * @n: number of lines to be printed
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');

	for (i = 0; i < n; i++)
	{
		if (!(n <= 0))
		{
			for (j = 0; j < i; j++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
		else
			break;
	}
}
