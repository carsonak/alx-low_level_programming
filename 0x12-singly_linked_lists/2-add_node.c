#include "lists.h"

/**
 * add_node - appends a new node at the beginning of a linked list
 * @head: address of the pointer to first node
 * @str: String to be appended to the list
 *
 * Return: pointer to first element in the new list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *nw_node = malloc(sizeof(*nw_node));
	unsigned int i = 1;
	char *nw_str;

	if (str == NULL)
		return (0);

	nw_str = strdup(str);
	if (!(nw_node))
		return (NULL);

	while (nw_str && nw_str[i])
		i++;

	nw_node->str = nw_str;
	nw_node->len = i;
	nw_node->next = *head;
	*head = nw_node;

	return (*head);
}
