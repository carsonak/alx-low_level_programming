#include "main.h"
#include <unistd.h>

/**
 * print_triangle - prints a triangle of #
 * @s: size of the triangle
 *
 * Return: void
 */
void print_triangle(int s)
{
	int i, j, k;

	if (s <= 0)
		_putchar('\n');

	for (i = 1; i <= s; i++)
	{
		if (!(s <= 0))
		{
			for (j = s - i; j > 0; j--)
				_putchar(' ');
			for (k = 0; k < i; k++)
				_putchar('#');
		}
		else
			break;
		_putchar('\n');
	}
}
