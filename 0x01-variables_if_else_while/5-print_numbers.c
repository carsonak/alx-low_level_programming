#include <stdio.h>

/**
 *main - Prints all single digit decimals
 *
 *Return: (0) if sucessful
 */

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	putchar(10);

	return (0);
}
