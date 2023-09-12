#include <unistd.h>
#include "main.h"
#include <stdio.h>

/**
 *times_table - prints the times table
 *
 *Return: void
 */

void times_table(void)
{
	int l, r, prod;

	for (l = 0; l < 10; l++)
	{
		for (r = 0; r < 10; r++)
		{
			prod = l * r;

			if (prod < 10 && r > 0)
			{
				_putchar(' ');
				_putchar('0' + prod);
			}
			else if (r == 0)
			{
				_putchar('0' + prod);
			}
			else
			{
				_putchar('0' + prod / 10);
				_putchar('0' + prod % 10);
			}

			if (r == 9)
				_putchar('\n');
			else
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
}
