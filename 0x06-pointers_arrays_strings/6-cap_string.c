#include <stdbool.h>

#include "main.h"

/**
 * is_word_separator - check if a character is a word separator.
 * @c: character to be checked.
 *
 * Return: true if it is, false otherwise.
 */
static bool is_word_separator(char c)
{
	return (c == ' ' || c == ',' || c == ';' || c == '.' || c == '!' ||
			c == '?' || c == '(' || c == ')' || c == '{' || c == '}' ||
			c == '\t' || c == '\n' || c == '\"');
}

/**
 * cap_string - capitalises only words of a string.
 * @a: string.
 *
 * Return: pointer to the new string.
 */
char *cap_string(char *a)
{
	int i;

	for (i = 0; a[i] != '\0'; i++)
		if (is_word_separator(a[i - 1]) || i == 0)
			if (a[i] >= 'a' && a[i] <= 'z')
				a[i] -= 32;

	return (a);
}
