#include <stdio.h>

/**
 *fibonacci - prints out the first 50 fibonacci numbers
 *
 *Return: void
 */

void fibonacci(void)
{
	unsigned long int i, a, b, sum;

	sum = 2;
	a = 1;
	printf("1, 2, ");

	for (i = 0; i < 97; i++)
	{
		b = sum;
		sum += a;
		a = b;

		if (i < 96)
			printf("%ld, ", sum);
		else if (i == 96)
			printf("%ld\n", sum);
	}
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
