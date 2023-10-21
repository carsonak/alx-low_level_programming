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
	list_t *new_node, *temp;
	unsigned int i = 0;

	if (!str)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	if (!(new_node->str))
	{
		free(new_node);
		return (NULL);
	}

	while (str[i])
		i++;

	new_node->len = i;
	new_node->next = NULL;

	if (!(*head))
	{
		*head = new_node;
		return (new_node);
	}

	temp = *head;
	while (temp->next)
		temp = temp->next;

	temp->next = new_node;

	return (new_node);
}
