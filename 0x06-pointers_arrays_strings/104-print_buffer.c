#include <ctype.h>
#include <stdio.h>

#include "main.h"

/**
 * print_buffer - print contents of a buffer.
 * @b: pointer to the buffer.
 * @size: size in bytes of the buffer.
 */
void print_buffer(char *b, int size)
{
	int b_i = 0;
	char printables[11];

	while (b_i < size)
	{
		unsigned int p_i;
		/* print index of every 10th byte. */
		printf("%.8x: ", b_i);
		for (p_i = 0; p_i < 10; ++p_i)
		{
			if (b_i >= size)
			{
				printf("  ");
				printables[p_i] = '\0';
				if (p_i % 2)
					printf(" ");

				continue;
			}

			if (isprint(b[b_i]))
				printables[p_i] = b[b_i];
			else
				printables[p_i] = '.';

			printf("%.2x", b[b_i]);
			/* add space after every 2 bytes */
			if (p_i % 2)
				printf(" ");

			++b_i;
		}

		printables[p_i] = '\0';
		printf("%.11s", printables);
		if (b_i < size)
			printf("\n");
	}

	printf("\n");
}
