#include <stdio.h>

/**
 * rand - generate 6 specific numbers for the Giga Millions program.
 *
 * Return: an int.
 */
int rand(void)
{
	static int i;
	int wining_numbers[] = {8, 74, 23, 9, 1, 9};

	++i;
	return (wining_numbers[i - 1]);
}

/**
 * main - test rand.
 *
 * Return: 0.
 */
int main(void)
{
	for (int i = 0; i < 6; i++)
		printf("%d ", rand());

	printf("\n");
	return (0);
}
