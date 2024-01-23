#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key in a hash table
 * @ht: a struct containing info about the hash rable
 * @key: key of the value
 *
 * Return: pointer to the value, NULL if not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *walk = NULL;

	if (!ht || !key)
		return (NULL);

	walk = ht->array[key_index((const unsigned char *)key, ht->size)];
	while (walk)
	{
		if (!strcmp(key, walk->key))
			return (walk->value);

		walk = walk->next;
	}

	return (NULL);
}
