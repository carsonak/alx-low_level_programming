#include "hash_tables.h"

/**
 * hash_djb2 - hashes a string using djb2
 * @str: the string
 *
 * Return: hash value of the string
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash = 5381;
	int c = 0;

	while (str && (c = *str++))
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	return (hash);
}
