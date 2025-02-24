#include "main.h"
#include <stdio.h>

/**
 * fizz_buzz - prints 1 - 100, except it replaces multiples of 3 & 5
 * with fizz and buzz.
 *
 * Return: void if sucessful.
 */
void fizz_buzz(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
		{
			printf("Buzz");
			if (i != 100)
				printf(" ");
		}
		else
			printf("%d ", i);
	}

	printf("\n");
}

/**
 * main - calls fizz_buzz
 *
 * Return: 0 if sucessful
 */
int main(void)
{
	fizz_buzz();
	return (0);
}
