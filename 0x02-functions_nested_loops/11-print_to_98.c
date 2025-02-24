#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * print_to_98 - prints from the give number to 98
 * @u: Starting point int
 *
 * Return: void
 */
void print_to_98(int u)
{
	int i;

	if (u <= 98)
	{
		for (i = u; i < 99; i++)
		{
			if (i == 98)
				printf("%d\n", i);
			else
				printf("%d, ", i);
		}
	}
	else
	{
		for (i = u; i > 97; i--)
		{
			if (i == 98)
				printf("%d\n", i);
			else
				printf("%d, ", i);
		}
	}
}
