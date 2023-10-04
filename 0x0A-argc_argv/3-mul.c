#include <stdio.h>
#include <stdlib.h>

/**
 * main - gets the multiple of two numbers
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", (atoi(argv[1]) * atoi(argv[2])));
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
