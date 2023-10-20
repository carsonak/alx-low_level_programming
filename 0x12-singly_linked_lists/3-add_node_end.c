#include "lists.h"

/**
 * add_node_end - appends a new node at the end of a linked list
 * @head: address of the pointer to first node
 * @str: String to be appended to the list
 *
 * Return: pointer to first element in the new list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nw_node = malloc(sizeof(list_t));
	int i = 1;
	char *nw_str = strdup(str);
	list_t *ptr = *head;

	if (!(nw_node))
		return (NULL);

	while (nw_str && nw_str[i])
		i++;
	while (ptr->next)
		ptr = ptr->next;

	nw_node->str = nw_str;
	nw_node->len = i;
	nw_node->next = NULL;
	ptr->next = nw_node;

	return (*head);
}
