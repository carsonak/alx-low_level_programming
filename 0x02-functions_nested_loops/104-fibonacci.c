#include <stdio.h>

/**
 *fibonacci - prints out the first 50 fibonacci numbers
 *
 *Return: void
 */

void fibonacci(void)
{
	unsigned long int i, a, b, c;

	c = 2;
	a = 1;
	printf("%ld, %ld", a, c);

	for (i = 0; i < 98; i++)
	{
		b = c;
		c += a;
		a = b;

		printf(", %ld", c);
	}
	printf("\n");
}

/**
 *main - calls fibonacci
 *
 *Return: 0
 */

int main(void)
{
	fibonacci();
	return (0);
}
