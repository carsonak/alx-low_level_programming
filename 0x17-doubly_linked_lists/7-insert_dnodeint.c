#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a node at a given index of
 * a doubly linked list
 * @h: address of the head of the file
 * @idx: index to insert at
 * @n: data to insert
 *
 * Return: Pointer to the new node, NULL on failure
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	size_t i = 0;
	dlistint_t *walk = NULL, *temp = NULL;

	if (h)
	{
		walk = *h;
		for (i = 0; walk && i < idx && walk->next; walk = walk->next)
			i++;

		if (i == idx || i + 1 == idx)
		{
			if (!walk || !walk->prev)
				temp = add_dnodeint(h, n);
			else if (!walk->next && i < idx)
				temp = add_dnodeint_end(h, n);
			else
			{
				temp = malloc(sizeof(dlistint_t));
				if (temp)
				{
					temp->n = n;
					temp->next = walk;
					temp->prev = walk->prev;
					temp->prev->next = temp;
					walk->prev = temp;
				}
			}
		}
	}

	return (temp);
}
