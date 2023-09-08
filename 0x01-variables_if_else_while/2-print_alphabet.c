#include <stdio.h>

/**
 *main - Prints the alphabet in lowercase
 *
 *Return: (0) if sucessful
 */

int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);
	putchar(10);

	return (0);
}
