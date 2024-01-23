#include "hash_tables.h"

/**
 * shash_table_create - malloc space for an array of pointers
 * @size: size of the array
 *
 * Return: pointer on success, NULL on failure
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *table = calloc(1, sizeof(*table));

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

/**
 * shash_table_set - updates a hash table with an element
 * @ht: pointer to valuct with hash table information
 * @key: key of the value
 * @value: data to be added
 *
 * Return: 1 on success, 0 on failure
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	size_t id = 0;
	shash_node_t *walk = NULL;

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

	if (!add_node_head(&(ht->array[id]), key, value))
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
	size_t i = 0;
	char comma = '\0', space = '\0';

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
					if (comma && space)
					{
						putchar(comma);
						putchar(space);
					}

					printf("'%s': '%s'", walk->key, walk->value);
					comma = ',';
					space = ' ';
					walk = walk->next;
				}
			}
		}
		printf("}\n");
	}
}

/**
 *
 */
void shash_table_print_rev(const shash_table_t *ht) {}

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

	nw_node = malloc(sizeof(*nw_node));
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
 * _strdup - copies a string into a new memory area.
 * @str: the string
 *
 * Return: pointer to the copy, NULL on failure
 */
char *_strdup(const char *str)
{
	char *cpy;
	size_t i = 0, len = 0;

	if (!str)
		return (NULL);

	len = strlen(str);
	cpy = calloc(sizeof(*str), (len + 1));
	if (cpy)
		for (i = 0; i <= len; i++)
			cpy[i] = str[i];

	return (cpy);
}
