#include "main.h"

/**
 * is_palindrome - checks whether a string is palindrome.
 * @s: the string
 *
 * Return: 1 if it's a palindrome, 0 if not.
 */
int is_palindrome(char *s)
{
	if (check_plndrm(s, 0, (int)strlen(s) - 1))
		return (1);

	return (0);
}

/**
 * check_plndrm - compares all charaters of a string to determine
 * wheteher they are palindromes
 * @str: the string
 * @a: index of the 1st character
 * @b: index of the last character
 *
 * Return: 1 if palindrome, 0 if not
 */
int check_plndrm(char *str, int a, int b)
{
	if (b > a)
	{
		if (str[a] == str[b])
		{
			return (check_plndrm(str, ++a, --b));
		}
		else
		{
			return (0);
		}
	}

	return (1);
}
