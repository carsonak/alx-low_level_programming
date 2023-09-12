#include <unistd.h>
#include <stdio.h>
#include "main.h"

/**
 *sum_35 - Gets thesum of all multiples 3 & 5 upto a specified range
 *
 *Return: void
 */

void sum_35(void)
{
	int i, sum;

	sum = 0;
	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	}

	printf("%d\n", sum);
}

/**
 *main - calls sum_35
 *
 *Return: 0 always
 */

int main(void)
{
	sum_35();

	return (0);
}
