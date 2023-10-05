#include <stdio.h>
#include <stdlib.h>

/**
 * main - calculates and prints out the minimum number of coins
 * to make change for an amount of money.
 * @ac: number of arguments passed to the program.
 * @av: The amount change to be returned.
 *
 * Return: Always o.
 */
int main(int ac, char *av[])
{
	int cents, coins = 0;

	if (ac != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(av[1]);
	if (cents >= 25)
	{
		coins += cents / 25;
		cents %= 25;
	}

	if (cents >= 10)
	{
		coins += cents / 10;
		cents %= 10;
	}

	if (cents >= 5)
	{
		coins += cents / 5;
		cents %= 5;
	}

	if (cents >= 2)
	{
		coins += cents / 2;
		cents %= 2;
	}

	if (cents > 0)
	{
		coins++;
		cents -= 1;
	}
	printf("%d\n", coins);
	return (0);
}
