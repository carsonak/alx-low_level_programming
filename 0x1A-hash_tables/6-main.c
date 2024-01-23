#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	hash_table_t *ht;
	char *key;
	char *value;

	ht = hash_table_create(1024);
	hash_table_set(ht, "c", "fun");
	hash_table_set(ht, "python", "awesome");
	hash_table_set(ht, "Bob", "and Kris love asm");
	hash_table_set(ht, "N", "queens");
	hash_table_set(ht, "Asterix", "Obelix");
	hash_table_set(ht, "Betty", "Cool");
	hash_table_set(ht, "98", "Battery Streetz");
	key = strdup("Tim");
	value = strdup("Britton");
	hash_table_set(ht, key, value);
	key[0] = '\0';
	value[0] = '\0';
	free(key);
	free(value);
	hash_table_set(ht, "98", "Battery Street");
	hash_table_set(ht, "hetairas", "Bob");
	hash_table_set(ht, "hetairas", "Bob Z");
	hash_table_set(ht, "mentioner", "Bob");
	hash_table_set(ht, "hetairas", "Bob Z Chu");
	hash_table_print(ht);
	ht_get_collisions(ht);
	hash_table_delete(ht);

	ht = hash_table_create(10);
	hash_table_set(ht, "Harry Potter", "");
	hash_table_set(ht, "Harry Potter", "And The");
	hash_table_set(ht, "Harry Potter", "And The Goblet of");
	hash_table_set(ht, "Harry Potter", "And The Goblet of Fire");
	hash_table_set(ht, "Betty", "Cool");
	hash_table_set(ht, "98", "Battery Street");
	hash_table_set(ht, "depravement", "divergent");
	hash_table_set(ht, "hetairas", "Some collision");
	hash_table_set(ht, "serafins", "insurgence");
	hash_table_set(ht, "mentioner", "some collision's collision");
	hash_table_set(ht, NULL, "NULL key");
	hash_table_set(ht, "a NULL val", NULL);
	hash_table_set(ht, "", "empty key");
	hash_table_set(ht, "Hagrid", "Keeper of The Keys");
	hash_table_set(ht, "Weasley", "A RON");
	hash_table_set(ht, "Ginny", "Ginger");
	hash_table_set(ht, "Hermione Granger", "Victor Krum");
	hash_table_set(ht, "Nimbus 2000", "Firebolt");
	hash_table_set(ht, "Whomping", "Willow");
	hash_table_set(ht, "Lord", "YKW");
	hash_table_set(ht, "Triwizard", "Tournament");
	hash_table_set(ht, "Cup", "World");
	hash_table_print(ht);
	ht_get_collisions(ht);
	hash_table_delete(ht);
	return (EXIT_SUCCESS);
}

/**
 * ht_get_collisions - prints out all indices with collisions and their items
 * @ht: pointer to a struct containing information about the struct
 */
void ht_get_collisions(const hash_table_t *ht)
{
	hash_node_t *walk = NULL;
	size_t i = 0;
	char *strng = NULL;

	if (ht)
	{
		printf("COLLISIONS:\n");
		for (i = 0; i < ht->size; i++)
		{
			if (ht->array[i] && ht->array[i]->next)
			{
				printf("[%ld] ==> [ ", i);
				walk = ht->array[i];
				while (walk)
				{
					strng = stringscat(9, strng, "'", walk->key, "'", ":", "'",
									   walk->value, "'", " ");
					walk = walk->next;
				}
				printf("%s]\n\n", strng);
				free(strng);
				strng = NULL;
			}
		}
	}
}

/**
 * stringscat - concatenates a variable number of strings
 * @items: the number of strings to be concatenated
 *
 * Description: First item must be a malloced string or NULL as the
 * function will attempt to free it.
 *
 * Return: pointer to the resultant string, NULL on failure
 */
char *stringscat(size_t items, ...)
{
	va_list ptr;
	char *s1 = NULL, *s2 = NULL;
	size_t i = items;

	if (!items)
		return (NULL);

	va_start(ptr, items);
	while (i)
	{
		s2 = s1;
		s1 = str_concat(s2, va_arg(ptr, char *));
		free(s2);
		if (!s1)
			break;

		i--;
	}

	va_end(ptr);
	return (s1);
}

/**
 * str_concat - concatinates 2 strings and stores them in a new array.
 * @s1: 1st string
 * @s2: 2nd string
 *
 * Return: a pointer to the new string, NULL if it fails
 */
char *str_concat(const char *s1, const char *s2)
{
	char *bGstr = NULL;
	size_t i = 0, j = 0;

	if (s1 && s2)
		bGstr = malloc((sizeof(*bGstr) * (strlen(s1) + strlen(s2))) + 1);
	else if (!s1 && s2)
		bGstr = malloc((sizeof(*bGstr) * strlen(s2)) + 1);
	else if (s1 && !s2)
		bGstr = malloc((sizeof(*bGstr) * strlen(s1)) + 1);
	else
		bGstr = malloc(sizeof(*bGstr));

	if (!bGstr)
	{
		perror("str_concat: Malloc fail");
		return (NULL);
	}

	if (s1)
		for (i = 0; s1[i] != '\0'; i++, j++)
			bGstr[j] = s1[i];

	if (s2)
		for (i = 0; s2[i] != '\0'; i++, j++)
			bGstr[j] = s2[i];

	bGstr[j] = '\0';
	return (bGstr);
}
