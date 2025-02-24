#include "main.h"
#include <unistd.h>

/**
 * print_square - prints a square of #
 * @s: size of the square
 *
 * Return: void
 */
void print_square(int s)
{
	int i, j;

	if (s <= 0)
		_putchar('\n');

	for (i = 0; i < s; i++)
	{
		if (!(s <= 0))
		{
			for (j = 0; j < s; j++)
				_putchar('#');
		}
		else
			break;
		_putchar('\n');
	}
}
