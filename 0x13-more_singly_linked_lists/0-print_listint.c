#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: head of the list
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *ptr = h;
	size_t node = 0;

	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		node += 1;
		ptr = ptr->next;
	}
	return (node);
}
