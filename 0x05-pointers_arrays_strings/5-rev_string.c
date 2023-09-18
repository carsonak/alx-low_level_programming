#include "main.h"
#include <limits.h>

/**
 *rev_string - reverses a string
 *@s: the string
 */

void rev_string(char *s)
{
	int a, i;
	char r[1024];

	a = strlen(s) - 1;

	for (i = a; i >= 0; i--)
		r[a - i] = *(s + i);

	for (i = 0; i <= a; i++)
		*(s + i) = r[i];
}
