#include <stdio.h>

/**
 *main - Prints all base 16 digits
 *
 *Return: (0) if sucessful
 */

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	for (i = 'a'; i < 'g'; i++)
		putchar(i);
	putchar(10);

	return (0);
}
