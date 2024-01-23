#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	hash_table_t *ht = NULL;
	size_t id = 0;
	char *val = "betty", *key = "cool";

	ht = hash_table_create(1024);
	if (hash_table_set(ht, key, val))
	{
		id = key_index((const unsigned char *)key, ht->size);
		printf("Key: %s\n", ht->array[id]->key);
		printf("Val: %s\n\n", ht->array[id]->value);
	}

	key = "tomatoe";
	val = "potatoe";
	if (hash_table_set(ht, key, val))
	{
		id = key_index((const unsigned char *)key, ht->size);
		printf("Key: %s\n", ht->array[id]->key);
		printf("Val: %s\n\n", ht->array[id]->value);
	}

	key = "heliotropes";
	val = "what?";
	if (hash_table_set(ht, key, val))
	{
		id = key_index((const unsigned char *)key, ht->size);
		printf("Key: %s\n", ht->array[id]->key);
		printf("Val: %s\n\n", ht->array[id]->value);
	}

	key = "neurospora";
	val = "dafuaq?";
	if (hash_table_set(ht, key, val))
	{
		id = key_index((const unsigned char *)key, ht->size);
		printf("Key: %s\n", ht->array[id]->key);
		printf("Val: %s\n\n", ht->array[id]->value);
	}

	key = "depravement";
	val = NULL;
	if (hash_table_set(ht, key, val))
	{
		id = key_index((const unsigned char *)key, ht->size);
		printf("Key: %s\n", ht->array[id]->key);
		printf("Val: %s\n\n", ht->array[id]->value);
	}
	else
		printf("%s = %s\n\n", key, val);

	key = NULL;
	val = "NULL";
	if (hash_table_set(ht, key, val))
	{
		id = key_index((const unsigned char *)key, ht->size);
		printf("Key: %s\n", ht->array[id]->key);
		printf("Val: %s\n\n", ht->array[id]->value);
	}
	else
		printf("%s = %s\n\n", key, val);

	return (EXIT_SUCCESS);
}
