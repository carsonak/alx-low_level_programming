#include <stdio.h>
#include "main.h"

/**
 *print_alphabet - prints alphabet in lower case.
 *
 *Return: void if successful.
 */

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);

	putchar('\n');
}
