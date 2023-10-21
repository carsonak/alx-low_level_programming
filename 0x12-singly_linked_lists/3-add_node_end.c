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
	list_t *nw_node = malloc(sizeof(*nw_node));
	unsigned int i = 1;
	list_t *ptr = NULL;

	if (!(nw_node))
	{
		ptr = *head;
		while (ptr->next != NULL)
		{
			free(ptr);
			ptr = ptr->next;
		}
		return (NULL);
	}
	else if (str == NULL)
		return (0);

	while (str && str[i])
		i++;

	nw_node->str = strdup(str);
	nw_node->len = i;
	nw_node->next = NULL;
	if (*head == NULL)
		*head = nw_node;
	else
	{
		ptr = *head;
		while (ptr->next != NULL)
			ptr = ptr->next;

		ptr->next = nw_node;
	}

	return (ptr);
}
