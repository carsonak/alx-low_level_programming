#include "main.h"

/**
 * _strlen - prints string length.
 * @arr: string
 *
 * Return: length of the string
 */
static int _strlen(char *arr)
{
	int i, cnt = 0;

	for (i = 0; arr[i] != '\0'; i++)
		cnt++;

	return (cnt);
}

/**
 * puts_half - prints out last half of a string.
 * @str: the string
 */
void puts_half(char *str)
{
	int i, n, max_str;

	max_str = _strlen(str);
	if (max_str % 2 == 0)
	{
		for (i = max_str / 2; i < max_str; i++)
			_putchar(*(str + i));
		_putchar('\n');
	}
	else
	{
		n = (max_str - 1) / 2;
		for (i = max_str - n; i < max_str; i++)
			_putchar(*(str + i));
		_putchar('\n');
	}
}
