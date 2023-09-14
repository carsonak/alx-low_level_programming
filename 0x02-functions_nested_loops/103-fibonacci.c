#include <stdio.h>

/**
 *fibonacciSM - prints out the sum of all even fibonacci
 *numbers below 4,000,000
 *
 *Return: void
 */

void fibonacciSM(void)
{
	long int a, b, c, sum;

	c = 2;
	a = 1;
	sum = 1;

	while (c <= 4000000)
	{
		b = c;
		c += a;
		a = b;

		if (c % 2 == 0)
		{
			sum += c;
		}
	}
	printf("%ld\n", sum);
}

/**
 *main - calls fibonacciSM
 *
 *Return: 0
 */

int main(void)
{
	fibonacciSM();
	return (0);
}
