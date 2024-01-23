#include "hash_tables.h"

/**
 * main - check the code for
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	hash_table_t *ht = NULL;

	ht = hash_table_create(1024);
	printf("Book keeping struct[%p]:\n", (void *)ht);
	if (ht)
	{
		printf("ADDRESSES:\n&ht->size ==> [%p]\n", (void *)&(ht->size));
		printf("&ht->array ==> [%p]\n", (void *)&(ht->array));
		printf("ht->array ==> [%p]\n", (void *)(ht->array));
		printf("ht->array[%ld] ==> [%p]\n", ht->size, (void *)&(ht->array[ht->size]));
	}

	return (EXIT_SUCCESS);
}
