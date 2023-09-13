#include <stdio.h>

/**
 *fibonacci - prints out the first 50 fibonacci numbers
 *
 *Return: void
 */

void fibonacci(void)
{
	long int a, b, c, sum;

    c = 2;
	a = 1;
    sum = 0;
	printf("1, 2, ");

	while (c <= 4,000,000)
	{
		b = c;
        c += a;
		a = b;

		if (c % 2 == 0)
        {
            sum += c;
        }
	}
    printf("%d", sum);
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
