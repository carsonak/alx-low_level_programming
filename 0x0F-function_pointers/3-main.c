#include "3-calc.h"

/**
 * main - accepts 3 arguments on runtime and executes predefined
 * operations with them.
 * @argc: number of arguments + program name
 * @argv: pointer to strings(the arguments)
 *
 * Return: 0 on success, 98 if number of arguments isn't 3
 * 99 if operand is not found, 100 if dividing or modulus by 0.
 */
int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	else if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		return (99);
	}
	else if ((get_op_func(argv[2]))(atoi(argv[1]), atoi(argv[3])) == -1)
	{
		printf("Error\n");
		return (100);
	}
	else
		printf("%d\n", (get_op_func(argv[2]))(atoi(argv[1]), atoi(argv[3])));

	return (0);
}
