#include "hash_tables.h"

/**
 * key_index - calculates a string's index in a hash table using djb2
 * @key: the string
 * @size: size of the hash table
 *
 * Return: the index for the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	size_t index = 0;

	if (key && size)
		index = hash_djb2(key) % size;

	return (index);
}
