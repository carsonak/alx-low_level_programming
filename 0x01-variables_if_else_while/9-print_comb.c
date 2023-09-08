#include <stdio.h>

/**
 *main - Prints all single digit Decimals separated by commas
 *and spaces
 *
 *Return: (0) if sucessful
 */

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; ++i)
	{
		putchar(i);
		if (i < '9')
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar(10);

	return (0);
}
