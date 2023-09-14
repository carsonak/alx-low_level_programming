#include <stdio.h>

/**
 *main - Prints lowercase letters in reverse
 *
 *Return: (0) if sucessful
 */

int main(void)
{
	int i;

	for (i = 'z'; i >= 'a'; i--)
		putchar(i);
	putchar(10);

	return (0);
}
