#include "3-calc.h"

/**
 * op_add - adds a and b
 * @a: first integer
 * @b: second integer
 *
 * Return: the results of the operation.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts a from b
 * @a: first integer
 * @b: second integer
 *
 * Return: the results of the operation.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies a by b
 * @a: first integer
 * @b: second integer
 *
 * Return: the results of the operation.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides a by b
 * @a: first integer
 * @b: second integer
 *
 * Return: the results of the operation, -1 if a or b == 0
 */
int op_div(int a, int b)
{
	if (a && b)
		return (a / b);
	else
		return (-1);
}

/**
 * op_mod - finds modulus of a and b
 * @a: first integer
 * @b: second integer
 *
 * Return: the results of the operation, -1 if a or b == 0
 */
int op_mod(int a, int b)
{
	if (a && b)
		return (a % b);
	else
		return (-1);
}
