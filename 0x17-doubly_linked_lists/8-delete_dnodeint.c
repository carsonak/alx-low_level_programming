#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes node of a doubly linked list at
 * the given index
 * @head: address of the head of the list
 * @index: index to delete
 *
 * Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	size_t i = 0;
	dlistint_t *walk = NULL;

	if (head && *head)
	{
		walk = *head;
		for (i = 0; i < index && walk->next; walk = walk->next)
			i++;

		if (i == index)
		{

			if (walk->next)
				walk->next->prev = walk->prev;

			if (walk->prev)
				walk->prev->next = walk->next;
			else
				*head = walk->next;

			free(walk);
			return (1);
		}
	}

	return (-1);
}
