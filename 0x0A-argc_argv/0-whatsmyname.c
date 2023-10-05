#include <stdio.h>

/**
 * main - Prints the program name, followed by a new line.
 * @argc: The number of arguments passed to the program.
 * @argv: An array of pointers (the arguments).
 *
 * Return: Always o.
 */
int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);

	return (0);
}
