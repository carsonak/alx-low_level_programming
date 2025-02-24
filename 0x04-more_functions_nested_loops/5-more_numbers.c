#include <stdio.h>
#include "main.h"

/**
 * more_numbers - prints numbers 0 - 14
 *
 * Return: void if sucessful.
 */
void more_numbers(void)
{
	char i, j;

	for (j = 1; j <= 10; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
			{
				_putchar('0' + i / 10);
			}
				_putchar('0' + i % 10);
		}
		_putchar('\n');
	}
}
