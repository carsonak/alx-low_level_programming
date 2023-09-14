#include <stdio.h>

/**
 *main - Prints lowercase then uppercase letters.
 *
 *Return: (0) if sucessful
 */

int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);
	for (i = 'A'; i <= 'Z'; i++)
		putchar(i);
	putchar(10);

	return (0);
}
