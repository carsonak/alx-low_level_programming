#include "hash_tables.h"

/**
 * hash_table_create - malloc space for an array of pointers
 * @size: size of the array
 *
 * Return: pointer on success, NULL on failure
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = calloc(1, sizeof(*table));

	if (table)
	{
		table->array = calloc(size, sizeof(*(table->array)));
		if (!table->array)
		{
			free(table);
			return (NULL);
		}
		else
			table->size = size;
	}

	return (table);
}
