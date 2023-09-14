#include <unistd.h>
#include "main.h"
#include <stdio.h>

/**
 *print_times_table - prints the times table
 *@n: size of the times table
 *
 *Return: void
 */

void print_times_table(int n)
{
	int l, r, prod;

	if (n >= 0 && n < 16)
	{
		for (l = 0; l <= n; l++)
		{
			for (r = 0; r <= n; r++)
			{
				prod = l * r;

				if (r == 0)
					printf("%d", prod);
				else if (prod < 10 && r > 0)
					printf(",   %d", prod);
				else if (prod < 100 && prod > 9)
					printf(",  %d", prod);
				else
					printf(", %d", prod);

				if (r == n)
					printf("\n");
			}
		}
	}
}
