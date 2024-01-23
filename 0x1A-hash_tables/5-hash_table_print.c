#include "hash_tables.h"

/**
 * hash_table_print - prints out all key value pairs of a hash table
 * @ht: pointer to a struct containing information about the struct
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *walk = NULL;
	size_t i = 0;
	char comma = '\0';

	if (ht)
	{
		printf("{");
		for (i = 0; i < ht->size; i++)
		{
			if (ht->array[i])
			{
				walk = ht->array[i];
				while (walk)
				{
					putchar(comma);
					printf("'%s':'%s'", walk->key, walk->value);
					comma = ',';
					walk = walk->next;
				}
			}
		}
		printf("}\n");
	}
}
