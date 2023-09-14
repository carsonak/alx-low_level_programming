#include <stdio.h>
/**
 *main - Prints all combinations of pairs of two digit decimals with no
 *repetition.
 *
 *Return: (0) if succesful
 */

int main(void)
{
	int a, b, c, d;

	/*Digit counters*/
	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			for (c = a; c <= 9; c++)
			{
				/*Ensuring no repetition*/
				if (c <= a)
					d = b;
				else
					d = 0;
				do {
					/*Check for clones*/
					if (a != c || b != d)
					{
						putchar(a + '0');
						putchar(b + '0');
						putchar(' ');
						putchar(c + '0');
						putchar(d + '0');
					/*Check for max values - 98 99*/
					if (a == 9 && b == 8 && c == 9 && d == 9)
						break;
					putchar(',');
					putchar(' ');
					}

					d++;
				} while (d <= 9);
			}
		}
	}
	putchar('\n');
	return (0);
}
