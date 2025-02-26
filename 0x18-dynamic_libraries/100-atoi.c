#include <limits.h>

#include "main.h"

/**
 * is_decimal_digit - check if a character is a decimal digit.
 * @c: character to be checked.
 *
 * Return: 1 if true, 0 if false.
 */
static unsigned char is_decimal_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);

	return (0);
}

/**
 * _atoi - converts the initial digits in a string into an integer.
 * @s: the string with a number.
 *
 * Return: the integer in the string `s`.
 */
int _atoi(char *s)
{
	unsigned int output = 0, max_val = INT_MAX;
	size_t i = 0;
	unsigned char is_negative = 0;

	while (*(s + i) && !is_decimal_digit(*(s + i)))
	{
		if (*(s + i) == '-')
			is_negative = !is_negative;

		i++;
	}

	if (is_negative)
		++max_val;

	while (*(s + i) && is_decimal_digit(*(s + i)) && output < max_val)
	{
		unsigned int tmp = (output * 10) + (*(s + i) - '0');

		if (tmp > max_val)
			break;

		output = tmp;
		i++;
	}

	if (is_negative)
		return (-output);

	return (output);
}
