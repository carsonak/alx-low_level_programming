#include "main.h"

/**
 * swap_int - swaps values of a and b
 * @a: Integer a
 * @b: Integer b
 */
void swap_int(int *a, int *b)
{
	int c, d;

	c = *b;
	d = *a;

	*a = c;
	*b = d;
}
