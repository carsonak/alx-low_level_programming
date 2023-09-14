#include <stdio.h>
#include "main.h"
#include <unistd.h>

/**
 *print_last_digit - prints last digit of a number
 *@n: a signed int.
 *
 *Return: last digit of n.
 */

int print_last_digit(int n)
{
	int lstnm;

	lstnm = n % 10;

	if (n < 0)
		lstnm = -lstnm;

	_putchar('0' + lstnm);

	return (lstnm);
}
