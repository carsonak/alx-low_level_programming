#include "main.h"

/**
 * print_buffer - prints the buffer in an array
 * @b: The array
 * @size: SIze of type
 */
void print_buffer(char *b, int size)
{
	int idx = 0, idy = 0;

	while (b[idx] != '\0')
	{
		idx++;
	}

	idx++;

	printf("%08x: ", idy);
	while (idx < size)
	{
		if (idx % 2)
			printf("%02x%02x ", b[idx], b[idx + 1]);

		if (!(idx % 10))
		{
			for (idy = idx - 10; idy <= idx; idy++)
				if (b[idy] >= ' ' && b[idy] <= '~')
					printf("%c", b[idy]);
				else
					putchar('.');

			printf("\n%08x: ", idy);
		}
		idx++;
	}
	putchar('\n');
}
