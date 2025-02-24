#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: the string
 */
void _print_rev_recursion(char *s)
{
	int sLen = strlen(s) - 1;

	get_reverse(s, sLen);
}

/**
 * get_reverse - reverses a string
 * @str: the string
 * @len: the size of the string
 */
void get_reverse(char *str, int len)
{
	if (len >= 0)
	{
		_putchar(str[len]);
		get_reverse(str, len - 1);
	}
	else
	{
		return;
	}
}
