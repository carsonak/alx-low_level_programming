#include "hash_tables.h"

/**
 * hash_table_delete - frees memory allocated to a hash table
 * @ht: a pointer to a struct with with the hash table information
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *f_foot = NULL, *b_foot = NULL;
	size_t i = 0;

	if (ht)
	{
		for (i = 0; ht->array && i < ht->size; i++)
		{
			if (ht->array[i])
			{
				f_foot = ht->array[i];
				while (f_foot)
				{
					b_foot = f_foot;
					f_foot = f_foot->next;
					free(b_foot->key);
					free(b_foot->value);
					free(b_foot);
				}
			}
		}

		free(ht->array);
		free(ht);
		ht = NULL;
	}
}
