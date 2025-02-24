#include <limits.h>

#include "main.h"

static void init_char_sieve(
	unsigned char *const char_sieve, const char *const accept)
{
	size_t i;

	for (i = 0; accept[i]; i++)
		char_sieve[(unsigned char)accept[i]] = 1;
}

static unsigned int char_in_sieve(
	unsigned char const *const char_sieve, const unsigned char c)
{
	return (char_sieve[c]);
}

/**
 * _strpbrk - search a string for any of a set of characters.
 * @s: string to check.
 * @accept: set of characters to search for.
 *
 * Return: a pointer to the byte in `s` that matched, NULL if none.
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned char char_sieve[UCHAR_MAX + 1] = {0};

	init_char_sieve(char_sieve, accept);
	while (*s && !char_in_sieve(char_sieve, *s))
		s++;

	if (*s)
		return (s);

	return (NULL);
}
