#include "hash_tables.h"

/**
 * shash_table_create - alloc space for a sorted hash table
 * @size: size of the hash table
 *
 * Return: a struct pointer on success, NULL on failure
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *table = calloc(1, sizeof(*table));

	if (table && size)
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

/**
 * shash_table_set - updates a sorted hash table with an element
 * @ht: pointer to struct with sorted hash table information
 * @key: key of the value
 * @value: data to be added
 *
 * Return: 1 on success, 0 on failure
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	size_t id = 0;
	shash_node_t *walk = NULL, *nw_temp = NULL;

	if (!ht || !ht->array || !key)
		return (0);

	id = key_index((const unsigned char *)key, ht->size);
	if (ht->array[id])
	{
		for (walk = ht->array[id]; walk; walk = walk->next)
			if (!strcmp(walk->key, key))
				break;
	}

	if (walk)
	{
		free(walk->value);
		walk->value = _strdup(value);
		if (value && !walk->value)
			return (0);
	}
	else
	{
		walk = add_node_head(&(ht->array[id]), key, value);
		if (!walk)
			return (0);
	}

	nw_temp = walk;
	for (walk = ht->shead; walk && walk->snext; walk = walk->snext)
		if (strcmp(walk->key, key) < 0)
			break;

	if (!add_snode_afthere((void *)&walk, (void *)&nw_temp))
		return (0);

	return (1);
}

/**
 * shash_table_get - retrieves a value associated with a key in a hash table
 * @ht: a struct containing info about the hash rable
 * @key: key of the value
 *
 * Return: pointer to the value, NULL if not found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *walk = NULL;

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

/**
 * shash_table_print - prints out all key value pairs of a hash table
 * @ht: pointer to a struct containing information about the struct
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *walk = NULL;
	char comma = '\0', space = '\0';

	if (ht)
	{
		printf("{");
		walk = ht->shead;
		while (walk)
		{
			if (comma && space)
			{
				putchar(comma);
				putchar(space);
			}

			printf("'%s': '%s'", walk->key, walk->value);
			comma = ',';
			space = ' ';
			walk = walk->snext;
		}

		printf("}\n");
	}
}

/**
 * shash_table_print_rev - prints a sorted hash table in reverse
 * @ht: pointer to a struct with information on the hash table
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *bwalk = NULL;
	char comma = '\0', space = '\0';

	if (ht)
	{
		printf("{");
		bwalk = ht->stail;
		while (bwalk)
		{
			if (comma && space)
			{
				putchar(comma);
				putchar(space);
			}

			printf("'%s': '%s'", bwalk->key, bwalk->value);
			comma = ',';
			space = ' ';
			bwalk = bwalk->sprev;
		}

		printf("}\n");
	}
}

/**
 * shash_table_delete - frees memory allocated to a hash table
 * @ht: a pointer to a struct with with the hash table information
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *f_foot = NULL, *b_foot = NULL;
	size_t i = 0;

	if (ht)
	{
		f_foot = ht->shead;
		while (f_foot)
		{
			b_foot = f_foot;
			f_foot = f_foot->snext;
			free(b_foot->key);
			free(b_foot->value);
			free(b_foot);
		}
		free(ht->array);
		free(ht);
		ht = NULL;
	}
}

/**
 * add_node_head - adds a new node to the beginning of a linked list
 * @h: address of the pointer to the first node
 * @val: data to be added
 * @key: more data
 *
 * Return: pointer to the just created node
 */
void *add_node_head(void **h, const char *key, const char *val)
{
	shash_node_t *nw_node = NULL;

	if (!h)
		return (NULL);

	nw_node = calloc(1, sizeof(*nw_node));
	if (!nw_node)
		return (NULL);

	nw_node->value = _strdup(val);
	nw_node->key = _strdup(key);
	if ((val && !nw_node->value) || !nw_node->key)
	{
		free(nw_node->value);
		free(nw_node->key);
		free(nw_node);
		return (NULL);
	}

	nw_node->next = (shash_node_t *)(*h);
	*h = nw_node;
	return (nw_node);
}

/**
 * add_snode_afthere - insert a node after the given node
 * @at_node: address of the pointer to the node to add after
 * @nw_node: address of the node to be added
 *
 * Return: pointer to the just created node
 */
void *add_snode_afthere(void **at_node, void **nw_node)
{
	shash_node_t *at_cpy = NULL, *nw_cpy = NULL;

	if (!at_node || !nw_node)
		return (NULL);

	at_cpy = (shash_node_t *)(*at_node);
	nw_cpy = (shash_node_t *)(*nw_node);
	if (at_cpy)
	{
		nw_cpy->snext = at_cpy->snext;
		at_cpy->snext = nw_cpy;
	}
	else
	{
		nw_cpy->snext = NULL;
		at_cpy = nw_cpy;
	}

	nw_cpy->sprev = at_cpy;
	return (nw_cpy);
}

/**
 * _strdup - copies a string into a new memory area.
 * @str: the string
 *
 * Return: pointer to the copy, NULL on failure
 */
char *_strdup(const char *str)
{
	char *cpy = NULL;
	size_t i = 0, len = 0;

	if (!str)
		return (NULL);

	len = strlen(str);
	cpy = calloc(sizeof(*str), (len + 1));
	if (cpy)
		for (i = 0; i < len; i++)
			cpy[i] = str[i];

	return (cpy);
}
