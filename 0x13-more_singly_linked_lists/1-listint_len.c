#include "lists.h"

/**
 * listint_len - countss the number of nodes in a linked list
 * @h: head of the list
 *
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *ptr = h;
	size_t ptr = 0;

	while (ptr != NULL)
	{
		ptr += 1;
		ptr = ptr->next;
	}
	return (ptr);
}
