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
 * _strspn - gets length of a prefix substring with a fixed set of characters.
 * @s: string to be checked.
 * @accept: the set of characters to look for.
 *
 * Return: length of the prefix substring.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned char char_sieve[UCHAR_MAX + 1] = {0};

	init_char_sieve(char_sieve, accept);
	while (s[i] && char_in_sieve(char_sieve, s[i]))
		i++;

	return (i);
}
