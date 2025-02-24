#include <stdio.h>

/**
 * fibonacci98 - prints out the first 50 fibonacci numbers
 *
 * Return: void
 */
void fibonacci98(void)
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
 * main - calls fibonacci
 *
 * Return: 0
 */
int main(void)
{
	fibonacci98();
	return (0);
}
