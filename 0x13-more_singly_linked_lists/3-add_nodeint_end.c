#include "lists.h"

/**
 * add_nodeint_end - adds a node to the end of a linked list
 * @head: address pointer to the head of the list
 * @n: content to be added
 *
 * Return: the address of the new node on success, NULL on failure
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *ptr = *head;

	new_node = malloc(sizeof(listint_t));
	if (new_node)
	{
		new_node->n = n;
		new_node->next = NULL;
	}
	else
		return (NULL);

	if (ptr)
	{
		while (ptr->next != NULL)
			ptr = ptr->next;
		ptr->next = new_node;
	}
	else
		*head = new_node;

	return (new_node);
}
