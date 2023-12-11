#include "lists.h"

/**
 * get_dnodeint_at_index - Returns node at a specified index in
 * a doubly linked list
 * @head: head of the list
 * @index: index to return
 *
 * Return: pointer to the node at specified index, NULL if out of bounds
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t i = 0;

	if (head)
		for (i = 0; i < index && head->next; head = head->next)
			i++;

	if (i == index)
		return (head);
	else
		return (NULL);
}
