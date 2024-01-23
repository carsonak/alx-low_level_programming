#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	hash_table_t *ht = NULL;

	hash_table_print(ht);
	ht = hash_table_create(1024);
	hash_table_print(ht);
	hash_table_set(ht, "c", "fun");
	hash_table_set(ht, "python", "awesome");
	hash_table_set(ht, "Bob", "and Kris love asm");
	hash_table_set(ht, "N", "queens");
	hash_table_set(ht, "Asterix", "Obelix");
	hash_table_set(ht, "Betty", "Cool");
	hash_table_set(ht, "98", "Battery Street");
	hash_table_set(ht, "depravement", "divergent");
	hash_table_set(ht, "serafins", "insurgence");
	hash_table_set(ht, NULL, "NULL key");
	hash_table_set(ht, "a NULL val", NULL);
	hash_table_set(ht, "", "empty key");
	hash_table_print(ht);
	return (EXIT_SUCCESS);
}
