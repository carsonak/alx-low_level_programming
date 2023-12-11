#include "lists.h"

/**
 * dlistint_len - returns number of nodes in a list
 * @h: head of the list
 *
 * Return: number of nodes in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	for (i = 0; h; h = h->next)
		i++;

	return (i);
}
