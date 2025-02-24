#include <limits.h>

#include "main.h"

/**
 * _isdigit_hidden - check for decimal characters.
 * @c: character to be checked.
 *
 * Return: 1 if true, 0 if false.
 */
static unsigned char _isdigit_hidden(char c)
{
	if (c >= '0' && c <= '9')
		return (1);

	return (0);
}

/**
 * _atoi - converts a string to an integer.
 * @s: the string with a number.
 *
 * Return: the integer in the string `s`.
 */

int _atoi(char *s)
{
	unsigned int output = 0;
	size_t i = 0;
	unsigned char is_negative = 0;

	while (s[i] && !_isdigit_hidden(s[i]))
	{
		if (s[i] == '-')
			is_negative = !is_negative;

		i++;
	}

	while (s[i] && _isdigit_hidden(s[i]))
	{
		if ((output * 10) + (s[i] - '0') > INT_MAX)
			break;

		output = (output * 10) + (s[i] - '0');
		i++;
	}

	if (is_negative)
		return (-output);

	return (output);
}
