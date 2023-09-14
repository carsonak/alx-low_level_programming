#include <stdio.h>
#include "main.h"
#include <unistd.h>

/**
 *_abs - prints the absolute value of a number.
 *@n: signed int to be checked.
 *
 *Return: absolute value of n.
 */

int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (n * -1);
}
