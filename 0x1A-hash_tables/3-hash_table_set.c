#include "hash_tables.h"

/**
 * hash_table_set - updates a hash table with an element
 * @ht: pointer to valuct with hash table information
 * @key: key of the value
 * @value: data to be added
 *
 * Return: 1 on success, 0 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	size_t id = 0;
	hash_node_t *walk = NULL;

	if (!ht || !ht->array || !key)
		return (0);

	id = key_index((const unsigned char *)key, ht->size);
	if (ht->array[id])
	{
		walk = ht->array[id];
		while (walk)
		{
			if (!strcmp(key, walk->key))
				break;

			walk = walk->next;
		}
	}

	if (walk)
	{
		free(walk->value);
		walk->value = _strdup(value);
		if (value && !walk->value)
			return (0);

		return (1);
	}

	if (!add_node_head((void *)&(ht->array[id]), key, value))
		return (0);

	return (1);
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
	hash_node_t *nw_node = NULL;

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

	nw_node->next = (hash_node_t *)(*h);
	*h = nw_node;
	return (nw_node);
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
